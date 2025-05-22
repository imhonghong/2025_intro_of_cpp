class farm{
    public:
        // constructor

        // get and set functions
        string getFileIn()
        void setFileIn(file_in)

        // functions
        vector<int> readDataFromFile(const string& filename);
        void sortVector(vector<int>& weights);
        int addTopFive(vector<int> weights);

    private:
        string file_in;
}