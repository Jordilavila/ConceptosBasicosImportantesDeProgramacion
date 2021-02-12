namespace model
{
    abstract class AVaso : IVaso {
        private string material;
        private double weight;
        private double capacity;
        private string typeOfGlass;

        public AVaso(string material, double capacity, double weight, string typeOfGlass)
        {
            this.material = material;
            this.capacity = capacity;
            this.weight = weight;
            this.typeOfGlass = typeOfGlass;
        }

        public string getMaterial() => this.material;

        public double getWeight() => this.weight;

        public double getCapacity() => this.capacity;

        public string getTypeOfGlass() => this.typeOfGlass;


    }
}
