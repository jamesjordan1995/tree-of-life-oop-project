#include "LifeForm.h"

    LifeForm::LifeForm(
        const Kingdom &k, 
        const Phylum &p, 
        const PhylumClass &pc, 
        const Order &o, 
        const Family &f, 
        const Genus &g, 
        const string &n, 
        const string &d
    )
        : 
        kingdom(k), 
        phylum(p), 
        phylumClass(pc), 
        order(o), 
        family(f), 
        genus(g), 
        name(n), 
        description(d)
    {
    }

    void LifeForm::Print()
    {
        string lb = "";
        string lbe = "=================================";
        for(si32 i = 0; i < (lbe.length()*2) + name.length(); i++)
        {
            lb += "=";
        }
        cout << lb << endl;
        cout << lbe << name << lbe << endl;
        cout << lb << endl;
        //cout << "LifeForm Name: " << name << endl;
        cout << "--LifeForm Description: " << description << endl;
        cout << "--LifeForm Kingdom: " << "\n\t" << kingdom.name << "," << "\n\t" << kingdom.description << endl;
        cout << "--LifeForm Phylum: " << "\n\t" << phylum.name << "," << "\n\t" << phylum.description << endl;
        cout << "--LifeForm Class: " << "\n\t" << phylumClass.name << "," << "\n\t" << phylumClass.description << endl;
        cout << "--LifeForm Order: " << "\n\t" << order.name << "," << "\n\t" << order.description << endl;
        cout << "--LifeForm Family: " << "\n\t" << family.name << "," << "\n\t" << family.description << endl;
        cout << "--LifeForm Genus: " << "\n\t" << genus.name << "," << "\n\t" << genus.description << endl;
        if(!traits.empty())
        {
            cout << "--Traits:" << endl;
            for(const auto &x: traits){
                cout << "\t" << x->traitName << " :: " << x->traitDescription << endl;
            }
        }
        if(!capabilities.empty())
        {
            cout << "--Capabilities:" << endl;
            for(const auto &x: capabilities){
                cout << "\t" << x->capabilityName << " :: " << x->capabilityDescription << endl;
            }
        }
        cin.get();
    }