#pragma once
#include "Film.h"
#include "Validate.h"
#include <vector>
#include <string>

using namespace std;

class Repository
{
private:
	vector <Film> films;
	Validate v;

public:

	/// <summary>	Gets the films. </summary>
	///
	/// <remarks>	Horatiu, 4/25/2020. </remarks>
	///
	/// <returns>	The films. </returns>
	vector <Film>& get_films() { return films; }

	/// <summary>	Print films. </summary>
	///
	/// <remarks>	Horatiu, 4/25/2020. </remarks>
	void print_films(vector <Film> films);

	/// <summary>	Adds a film. </summary>
	///
	/// <remarks>	Horatiu, 4/25/2020. </remarks>
	///
	/// <param name="TITLE">  	The title. </param>
	/// <param name="GENRE">  	The genre. </param>
	/// <param name="YEAR">   	The year. </param>
	/// <param name="TRAILER">	The trailer. </param>
	/// <param name="ID">	  	The identifier. </param>
	///
	/// <returns>	True if it succeeds, false if it fails. </returns>
	bool add_film(string TITLE, string GENRE, string YEAR, string TRAILER, int ID);

	/// <summary>	Removes the film described by ID. </summary>
	///
	/// <remarks>	Horatiu, 4/25/2020. </remarks>
	///
	/// <param name="ID">	The identifier. </param>
	///
	/// <returns>	True if it succeeds, false if it fails. </returns>
	bool remove_film(int ID);

	/// <summary>	Updates the film. </summary>
	///
	/// <remarks>	Horatiu, 4/25/2020. </remarks>
	///
	/// <param name="ID">		  	The identifier. </param>
	/// <param name="NEW_TITLE">  	The new title. </param>
	/// <param name="NEW_GENRE">  	The new genre. </param>
	/// <param name="NEW_YEAR">   	The new year. </param>
	/// <param name="NEW_TRAILER">	The new trailer. </param>
	///
	/// <returns>	True if it succeeds, false if it fails. </returns>
	bool update_film(int ID, string NEW_TITLE, string NEW_GENRE, string NEW_YEAR, string NEW_TRAILER);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>    Shows all the films (with the given Genre) to the user.
	///                If Genre is not valid, the function returns the whole list of films.
	/// </summary>
	///
	/// <remarks>    Pinko, 4/25/2020. </remarks>
	///
	/// <param name="GENRE">    The genre given as a string(Case Insensitive). </param>
	///
	/// <returns>    A vector of the found results. </returns>
	////////////////////////////////////////////////////////////////////////////////////////////////////
	vector <Film> show_films_to_user(string GENRE);

	////////////////////////////////////////////////////////////////////////////////////////////////////
	/// <summary>    Opens a given link in the default browser. </summary>
	///
	/// <remarks>    Pinko, 4/25/2020. </remarks>
	///
	/// <param name="LINK">    The link as a string. </param>
	////////////////////////////////////////////////////////////////////////////////////////////////////
	void open_link_in_browser(string LINK);

	//reading and writing within a file
	void write_file(vector <Film> v, string filename);
	void read_file(vector <Film>& v, string file);

	Repository();
	~Repository();

};

