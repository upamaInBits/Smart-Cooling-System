%--------------------------------------------------------------------------
% Matlab M-file Project: HyEQ Toolbox @  Hybrid Systems Laboratory (HSL), 
% https://hybrid.soe.ucsc.edu/software
% http://hybridsimulator.wordpress.com/
% Filename: postprocessing_exContinuousPlant.m
%--------------------------------------------------------------------------
% Project: Simulation of a hybrid system (Continuous plant)
%--------------------------------------------------------------------------
%--------------------------------------------------------------------------
%   See also plotflows, plotHarc, plotHarcColor, plotHarcColor3D,
%   plotHybridArc, plotjumps.
%   Copyright @ Hybrid Systems Laboratory (HSL),
%   Revision: 0.0.0.3 Date: 05/20/2015 3:42:00



figure(1)
clf
subplot(2,1,1),plotarc(t,j,T);
xlabel('time')
ylabel('T')
grid on
legend('T')
subplot(2,1,2),plotarc(t,j,u);
xlabel('time')
ylabel('u')
grid on

