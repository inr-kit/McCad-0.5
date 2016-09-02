# McCad-0.5
The new McCad version with imporved decomposition function

McCad0.5.0 has improved the decomposition functions, which can process the model with boundary surfaces of planes and cylinders.

Type "McCad -d (stepfilename).stp -n" to decompose the input CAD model.
the last parameter is to control combine the solids after decomposition or not.

 -0 means the decomposed solids will be saved as independent solids.
 
 -1 means the the decomposed solids which belong to one original solid will be combined.
 
 -2 means all the decomposed solids will be combined as one solid.

