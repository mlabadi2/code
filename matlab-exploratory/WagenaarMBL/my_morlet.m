%% my morlet
function m = my_morlet(t, params)

sigma = params(1);
m = pi^-0.25*exp(-i*sigma.*t-0.5*t.^2);
