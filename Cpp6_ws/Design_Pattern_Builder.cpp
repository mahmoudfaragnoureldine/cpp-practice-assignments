#include <iostream>

class Meal
{
    private:
        std::string drink;
        std::string mainCourse;
        std::string desert;
    public:
        void setDrink(std::string _drink) 
        {
            drink = _drink;
        }
        void setMainCourse(std::string _mainCourse)
        {
            mainCourse = _mainCourse;
        }
        void setDesert(std::string _desert)
        {
            desert = _desert;
        }
        void show() const
        {
            std::cout << "Meal: " << drink << " , " << mainCourse << " , " << desert << std::endl;
        }
};

class MealBuilder
{
    public:
        virtual void buildDrink() = 0;
        virtual void buildMainCourse() = 0;
        virtual void buildDesert() = 0;
        virtual Meal* getMeal() = 0; 
};

class Meal_1 : public MealBuilder
{
    private:
        Meal* meal;
    public:
        Meal_1()
        {
            meal = new Meal();
        }
        void buildDrink() override
        {
            meal->setDrink("Pepsi");
        }
        void buildMainCourse() override
        {
            meal->setMainCourse("Meat");
        }
        void buildDesert() override
        {
            meal->setDesert("Cake");
        }
        Meal* getMeal() override
        {
            return meal;
        }
};

class Meal_2 : public MealBuilder
{
    private:
        Meal* meal;
    public:
        Meal_2()
        {
            meal = new Meal();
        }
        void buildDrink() override
        {
            meal->setDrink("Coka");
        }
        void buildMainCourse() override
        {
            meal->setMainCourse("Chicken");
        }
        void buildDesert() override
        {
            meal->setDesert("Chesse Cake");
        }
        Meal* getMeal() override
        {
            return meal;
        }
};

class Chef
{
    public:
        Meal* prepareMeal(MealBuilder* builder)
        {
            builder->buildDrink();
            builder->buildMainCourse();
            builder->buildDesert();
            return builder->getMeal();
        }
};

int main() {
    Chef cf;

    Meal_1 ml1;
    Meal* final_meal1 = cf.prepareMeal(&ml1);
    final_meal1->show();

    Meal_2 ml2;
    Meal* final_meal2 = cf.prepareMeal(&ml2);
    final_meal2->show();
    return 0;
}