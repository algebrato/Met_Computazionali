class Verbose{
	public:
		Verbose();
		~Verbose();
		int i;
		Verbose factory();
		explicit Verbose(const Verbose & v);//costruttore di copie può essere dichiarato explicit per inibire le copie esplicite
		void by_val(const Verbose v);
		void by_ref(const Verbose & v);

			
};



