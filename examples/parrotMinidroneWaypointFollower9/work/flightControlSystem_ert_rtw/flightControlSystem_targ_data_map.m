    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 20;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (dexojrsdjj)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% dexojrsdjj.Sensors
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% dexojrsdjj.Constant_Value
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

                    ;% dexojrsdjj.RateTransition_InitialCondition
                    section.data(2).logicalSrcIdx = 2;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(2) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.outlierBelowFloor_const
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

                    ;% dexojrsdjj.jm1j3qtn2yy.outlierJump_const
                    section.data(2).logicalSrcIdx = 4;
                    section.data(2).dtTransOffset = 1;

                    ;% dexojrsdjj.jm1j3qtn2yy.currentEstimateVeryOffFromPressure_const
                    section.data(3).logicalSrcIdx = 5;
                    section.data(3).dtTransOffset = 2;

                    ;% dexojrsdjj.jm1j3qtn2yy.currentStateVeryOffsonarflt_const
                    section.data(4).logicalSrcIdx = 6;
                    section.data(4).dtTransOffset = 3;

                    ;% dexojrsdjj.jm1j3qtn2yy.ComparewithStoptime_const
                    section.data(5).logicalSrcIdx = 7;
                    section.data(5).dtTransOffset = 4;

                    ;% dexojrsdjj.jm1j3qtn2yy.Checkerrorcondition_const
                    section.data(6).logicalSrcIdx = 8;
                    section.data(6).dtTransOffset = 5;

                    ;% dexojrsdjj.jm1j3qtn2yy.u0continuousOFerrors_const
                    section.data(7).logicalSrcIdx = 9;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            paramMap.sections(3) = section;
            clear section

            section.nData     = 41;
            section.data(41)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.Angularvelocitycontrolloop_D
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

                    ;% dexojrsdjj.jm1j3qtn2yy.Angularvelocitycontrolloop_I
                    section.data(2).logicalSrcIdx = 11;
                    section.data(2).dtTransOffset = 2;

                    ;% dexojrsdjj.jm1j3qtn2yy.Velocitycontroller_I
                    section.data(3).logicalSrcIdx = 12;
                    section.data(3).dtTransOffset = 4;

                    ;% dexojrsdjj.jm1j3qtn2yy.DiscreteDerivative_ICPrevScaledInput
                    section.data(4).logicalSrcIdx = 13;
                    section.data(4).dtTransOffset = 5;

                    ;% dexojrsdjj.jm1j3qtn2yy.Angularvelocitycontrolloop_InitialConditionForFilter
                    section.data(5).logicalSrcIdx = 14;
                    section.data(5).dtTransOffset = 6;

                    ;% dexojrsdjj.jm1j3qtn2yy.Velocitycontroller_InitialConditionForIntegrator
                    section.data(6).logicalSrcIdx = 15;
                    section.data(6).dtTransOffset = 7;

                    ;% dexojrsdjj.jm1j3qtn2yy.Angularvelocitycontrolloop_InitialConditionForIntegrator
                    section.data(7).logicalSrcIdx = 16;
                    section.data(7).dtTransOffset = 8;

                    ;% dexojrsdjj.jm1j3qtn2yy.Positioncontroller_LowerSaturationLimit
                    section.data(8).logicalSrcIdx = 17;
                    section.data(8).dtTransOffset = 9;

                    ;% dexojrsdjj.jm1j3qtn2yy.Velocitycontroller_LowerSaturationLimit
                    section.data(9).logicalSrcIdx = 18;
                    section.data(9).dtTransOffset = 10;

                    ;% dexojrsdjj.jm1j3qtn2yy.Angularvelocitycontrolloop_LowerSaturationLimit
                    section.data(10).logicalSrcIdx = 19;
                    section.data(10).dtTransOffset = 11;

                    ;% dexojrsdjj.jm1j3qtn2yy.Angularvelocitycontrolloop_N
                    section.data(11).logicalSrcIdx = 20;
                    section.data(11).dtTransOffset = 12;

                    ;% dexojrsdjj.jm1j3qtn2yy.Positioncontroller_P
                    section.data(12).logicalSrcIdx = 21;
                    section.data(12).dtTransOffset = 14;

                    ;% dexojrsdjj.jm1j3qtn2yy.Velocitycontroller_P
                    section.data(13).logicalSrcIdx = 22;
                    section.data(13).dtTransOffset = 15;

                    ;% dexojrsdjj.jm1j3qtn2yy.Anglecontrolloop_P
                    section.data(14).logicalSrcIdx = 23;
                    section.data(14).dtTransOffset = 16;

                    ;% dexojrsdjj.jm1j3qtn2yy.Angularvelocitycontrolloop_P
                    section.data(15).logicalSrcIdx = 24;
                    section.data(15).dtTransOffset = 17;

                    ;% dexojrsdjj.jm1j3qtn2yy.Positioncontroller_UpperSaturationLimit
                    section.data(16).logicalSrcIdx = 25;
                    section.data(16).dtTransOffset = 19;

                    ;% dexojrsdjj.jm1j3qtn2yy.Velocitycontroller_UpperSaturationLimit
                    section.data(17).logicalSrcIdx = 26;
                    section.data(17).dtTransOffset = 20;

                    ;% dexojrsdjj.jm1j3qtn2yy.Angularvelocitycontrolloop_UpperSaturationLimit
                    section.data(18).logicalSrcIdx = 27;
                    section.data(18).dtTransOffset = 21;

                    ;% dexojrsdjj.jm1j3qtn2yy.Checkifthedroneis03maboveground_const
                    section.data(19).logicalSrcIdx = 28;
                    section.data(19).dtTransOffset = 22;

                    ;% dexojrsdjj.jm1j3qtn2yy.CompareToConstant_const
                    section.data(20).logicalSrcIdx = 29;
                    section.data(20).dtTransOffset = 23;

                    ;% dexojrsdjj.jm1j3qtn2yy.CompareToConstant1_const
                    section.data(21).logicalSrcIdx = 30;
                    section.data(21).dtTransOffset = 24;

                    ;% dexojrsdjj.jm1j3qtn2yy.maxp_const
                    section.data(22).logicalSrcIdx = 31;
                    section.data(22).dtTransOffset = 25;

                    ;% dexojrsdjj.jm1j3qtn2yy.maxq_const
                    section.data(23).logicalSrcIdx = 32;
                    section.data(23).dtTransOffset = 26;

                    ;% dexojrsdjj.jm1j3qtn2yy.maxw1_const
                    section.data(24).logicalSrcIdx = 33;
                    section.data(24).dtTransOffset = 27;

                    ;% dexojrsdjj.jm1j3qtn2yy.maxw2_const
                    section.data(25).logicalSrcIdx = 34;
                    section.data(25).dtTransOffset = 28;

                    ;% dexojrsdjj.jm1j3qtn2yy.maxdw1_const
                    section.data(26).logicalSrcIdx = 35;
                    section.data(26).dtTransOffset = 29;

                    ;% dexojrsdjj.jm1j3qtn2yy.maxdw2_const
                    section.data(27).logicalSrcIdx = 36;
                    section.data(27).dtTransOffset = 30;

                    ;% dexojrsdjj.jm1j3qtn2yy.maxp2_const
                    section.data(28).logicalSrcIdx = 37;
                    section.data(28).dtTransOffset = 31;

                    ;% dexojrsdjj.jm1j3qtn2yy.maxq2_const
                    section.data(29).logicalSrcIdx = 38;
                    section.data(29).dtTransOffset = 32;

                    ;% dexojrsdjj.jm1j3qtn2yy.maxw3_const
                    section.data(30).logicalSrcIdx = 39;
                    section.data(30).dtTransOffset = 33;

                    ;% dexojrsdjj.jm1j3qtn2yy.maxw4_const
                    section.data(31).logicalSrcIdx = 40;
                    section.data(31).dtTransOffset = 34;

                    ;% dexojrsdjj.jm1j3qtn2yy.minHeightforOF_const
                    section.data(32).logicalSrcIdx = 41;
                    section.data(32).dtTransOffset = 35;

                    ;% dexojrsdjj.jm1j3qtn2yy.DeactivateAccelerationIfOFisnotusedduetolowaltitude_const
                    section.data(33).logicalSrcIdx = 42;
                    section.data(33).dtTransOffset = 36;

                    ;% dexojrsdjj.jm1j3qtn2yy.donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto200_con
                    section.data(34).logicalSrcIdx = 43;
                    section.data(34).dtTransOffset = 37;

                    ;% dexojrsdjj.jm1j3qtn2yy.donotuseaccifopticalflowneveravailableNoteOF60HzbutZOHto2001_co
                    section.data(35).logicalSrcIdx = 44;
                    section.data(35).dtTransOffset = 38;

                    ;% dexojrsdjj.jm1j3qtn2yy.CompareToConstant_const_mb4qepacc4
                    section.data(36).logicalSrcIdx = 45;
                    section.data(36).dtTransOffset = 39;

                    ;% dexojrsdjj.jm1j3qtn2yy.CompareToConstant1_const_mncwm1r13x
                    section.data(37).logicalSrcIdx = 46;
                    section.data(37).dtTransOffset = 40;

                    ;% dexojrsdjj.jm1j3qtn2yy.CompareToConstant2_const
                    section.data(38).logicalSrcIdx = 47;
                    section.data(38).dtTransOffset = 41;

                    ;% dexojrsdjj.jm1j3qtn2yy.CompareToConstant4_const
                    section.data(39).logicalSrcIdx = 48;
                    section.data(39).dtTransOffset = 42;

                    ;% dexojrsdjj.jm1j3qtn2yy.CompareToConstant3_const
                    section.data(40).logicalSrcIdx = 49;
                    section.data(40).dtTransOffset = 43;

                    ;% dexojrsdjj.jm1j3qtn2yy.CompareToConstant5_const
                    section.data(41).logicalSrcIdx = 50;
                    section.data(41).dtTransOffset = 44;

            nTotData = nTotData + section.nData;
            paramMap.sections(4) = section;
            clear section

            section.nData     = 7;
            section.data(7)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.WrapToZero_Threshold
                    section.data(1).logicalSrcIdx = 51;
                    section.data(1).dtTransOffset = 0;

                    ;% dexojrsdjj.jm1j3qtn2yy.WrapToZero_Threshold_ln0v0vpll5
                    section.data(2).logicalSrcIdx = 52;
                    section.data(2).dtTransOffset = 1;

                    ;% dexojrsdjj.jm1j3qtn2yy.WrapToZero_Threshold_lmlq5k2inr
                    section.data(3).logicalSrcIdx = 53;
                    section.data(3).dtTransOffset = 2;

                    ;% dexojrsdjj.jm1j3qtn2yy.WrapToZero_Threshold_jmxu1pvt23
                    section.data(4).logicalSrcIdx = 54;
                    section.data(4).dtTransOffset = 3;

                    ;% dexojrsdjj.jm1j3qtn2yy.CompareToConstant_const_pkf0zm0gdf
                    section.data(5).logicalSrcIdx = 55;
                    section.data(5).dtTransOffset = 4;

                    ;% dexojrsdjj.jm1j3qtn2yy.CompareToConstant_const_mghpjwme0t
                    section.data(6).logicalSrcIdx = 56;
                    section.data(6).dtTransOffset = 5;

                    ;% dexojrsdjj.jm1j3qtn2yy.Wait5seconds_const
                    section.data(7).logicalSrcIdx = 57;
                    section.data(7).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            paramMap.sections(5) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.WrapToZero_Threshold_foxiihrlgo
                    section.data(1).logicalSrcIdx = 58;
                    section.data(1).dtTransOffset = 0;

                    ;% dexojrsdjj.jm1j3qtn2yy.CompareToConstant_const_ibo5bqia42
                    section.data(2).logicalSrcIdx = 59;
                    section.data(2).dtTransOffset = 1;

            nTotData = nTotData + section.nData;
            paramMap.sections(6) = section;
            clear section

            section.nData     = 42;
            section.data(42)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.DisableOFcheck_Value
                    section.data(1).logicalSrcIdx = 60;
                    section.data(1).dtTransOffset = 0;

                    ;% dexojrsdjj.jm1j3qtn2yy._Value
                    section.data(2).logicalSrcIdx = 61;
                    section.data(2).dtTransOffset = 1;

                    ;% dexojrsdjj.jm1j3qtn2yy.StartupWaypoints_Value
                    section.data(3).logicalSrcIdx = 62;
                    section.data(3).dtTransOffset = 2;

                    ;% dexojrsdjj.jm1j3qtn2yy.Waypoints_Value
                    section.data(4).logicalSrcIdx = 63;
                    section.data(4).dtTransOffset = 5;

                    ;% dexojrsdjj.jm1j3qtn2yy.Lookaheaddistance_Value
                    section.data(5).logicalSrcIdx = 64;
                    section.data(5).dtTransOffset = 32;

                    ;% dexojrsdjj.jm1j3qtn2yy.Lykyhatkk1_Y0
                    section.data(6).logicalSrcIdx = 65;
                    section.data(6).dtTransOffset = 33;

                    ;% dexojrsdjj.jm1j3qtn2yy.deltax_Y0
                    section.data(7).logicalSrcIdx = 66;
                    section.data(7).dtTransOffset = 34;

                    ;% dexojrsdjj.jm1j3qtn2yy.Constant_Value
                    section.data(8).logicalSrcIdx = 67;
                    section.data(8).dtTransOffset = 35;

                    ;% dexojrsdjj.jm1j3qtn2yy.Delay2_InitialCondition
                    section.data(9).logicalSrcIdx = 68;
                    section.data(9).dtTransOffset = 36;

                    ;% dexojrsdjj.jm1j3qtn2yy.X0_Value
                    section.data(10).logicalSrcIdx = 69;
                    section.data(10).dtTransOffset = 37;

                    ;% dexojrsdjj.jm1j3qtn2yy.SaturationSonar_LowerSat
                    section.data(11).logicalSrcIdx = 70;
                    section.data(11).dtTransOffset = 39;

                    ;% dexojrsdjj.jm1j3qtn2yy.sonarFilter_IIR_NumCoef
                    section.data(12).logicalSrcIdx = 71;
                    section.data(12).dtTransOffset = 40;

                    ;% dexojrsdjj.jm1j3qtn2yy.sonarFilter_IIR_DenCoef
                    section.data(13).logicalSrcIdx = 72;
                    section.data(13).dtTransOffset = 44;

                    ;% dexojrsdjj.jm1j3qtn2yy.sonarFilter_IIR_InitialStates
                    section.data(14).logicalSrcIdx = 73;
                    section.data(14).dtTransOffset = 48;

                    ;% dexojrsdjj.jm1j3qtn2yy.KalmanGainM_Value
                    section.data(15).logicalSrcIdx = 74;
                    section.data(15).dtTransOffset = 49;

                    ;% dexojrsdjj.jm1j3qtn2yy.C_Value
                    section.data(16).logicalSrcIdx = 75;
                    section.data(16).dtTransOffset = 51;

                    ;% dexojrsdjj.jm1j3qtn2yy.KalmanGainM_Value_powjir1wsi
                    section.data(17).logicalSrcIdx = 76;
                    section.data(17).dtTransOffset = 53;

                    ;% dexojrsdjj.jm1j3qtn2yy.KalmanGainM_Value_ekl0skr45q
                    section.data(18).logicalSrcIdx = 77;
                    section.data(18).dtTransOffset = 55;

                    ;% dexojrsdjj.jm1j3qtn2yy.KalmanGainM_Value_dq3fkarefj
                    section.data(19).logicalSrcIdx = 78;
                    section.data(19).dtTransOffset = 57;

                    ;% dexojrsdjj.jm1j3qtn2yy.KalmanGainL_Value
                    section.data(20).logicalSrcIdx = 79;
                    section.data(20).dtTransOffset = 65;

                    ;% dexojrsdjj.jm1j3qtn2yy.gravity_Value
                    section.data(21).logicalSrcIdx = 80;
                    section.data(21).dtTransOffset = 73;

                    ;% dexojrsdjj.jm1j3qtn2yy.gainaccinput1_Gain
                    section.data(22).logicalSrcIdx = 81;
                    section.data(22).dtTransOffset = 76;

                    ;% dexojrsdjj.jm1j3qtn2yy.A_Value
                    section.data(23).logicalSrcIdx = 82;
                    section.data(23).dtTransOffset = 77;

                    ;% dexojrsdjj.jm1j3qtn2yy.gravity_Value_oeymbdidtv
                    section.data(24).logicalSrcIdx = 83;
                    section.data(24).dtTransOffset = 81;

                    ;% dexojrsdjj.jm1j3qtn2yy.KalmanGainL_Value_pmplkpolzy
                    section.data(25).logicalSrcIdx = 84;
                    section.data(25).dtTransOffset = 84;

                    ;% dexojrsdjj.jm1j3qtn2yy.KalmanGainL_Value_pvwmg0xigq
                    section.data(26).logicalSrcIdx = 85;
                    section.data(26).dtTransOffset = 86;

                    ;% dexojrsdjj.jm1j3qtn2yy.B_Value
                    section.data(27).logicalSrcIdx = 86;
                    section.data(27).dtTransOffset = 88;

                    ;% dexojrsdjj.jm1j3qtn2yy.D_Value
                    section.data(28).logicalSrcIdx = 87;
                    section.data(28).dtTransOffset = 90;

                    ;% dexojrsdjj.jm1j3qtn2yy.KalmanGainL_Value_pexjv45wr0
                    section.data(29).logicalSrcIdx = 88;
                    section.data(29).dtTransOffset = 91;

                    ;% dexojrsdjj.jm1j3qtn2yy.Wait3Seconds_Value
                    section.data(30).logicalSrcIdx = 89;
                    section.data(30).dtTransOffset = 93;

                    ;% dexojrsdjj.jm1j3qtn2yy.DelayOneStep_InitialCondition
                    section.data(31).logicalSrcIdx = 90;
                    section.data(31).dtTransOffset = 94;

                    ;% dexojrsdjj.jm1j3qtn2yy.u5meters_Value
                    section.data(32).logicalSrcIdx = 91;
                    section.data(32).dtTransOffset = 95;

                    ;% dexojrsdjj.jm1j3qtn2yy.CovarianceZ_Value
                    section.data(33).logicalSrcIdx = 92;
                    section.data(33).dtTransOffset = 96;

                    ;% dexojrsdjj.jm1j3qtn2yy.CovarianceZ_Value_nehehu0kmn
                    section.data(34).logicalSrcIdx = 93;
                    section.data(34).dtTransOffset = 112;

                    ;% dexojrsdjj.jm1j3qtn2yy.P0_Value
                    section.data(35).logicalSrcIdx = 94;
                    section.data(35).dtTransOffset = 116;

                    ;% dexojrsdjj.jm1j3qtn2yy.CovarianceZ_Value_lqpmpoeqmu
                    section.data(36).logicalSrcIdx = 95;
                    section.data(36).dtTransOffset = 120;

                    ;% dexojrsdjj.jm1j3qtn2yy.CovarianceZ_Value_oykavvsplz
                    section.data(37).logicalSrcIdx = 96;
                    section.data(37).dtTransOffset = 124;

                    ;% dexojrsdjj.jm1j3qtn2yy.G_Value
                    section.data(38).logicalSrcIdx = 97;
                    section.data(38).dtTransOffset = 128;

                    ;% dexojrsdjj.jm1j3qtn2yy.H_Value
                    section.data(39).logicalSrcIdx = 98;
                    section.data(39).dtTransOffset = 130;

                    ;% dexojrsdjj.jm1j3qtn2yy.N_Value
                    section.data(40).logicalSrcIdx = 99;
                    section.data(40).dtTransOffset = 131;

                    ;% dexojrsdjj.jm1j3qtn2yy.Q_Value
                    section.data(41).logicalSrcIdx = 100;
                    section.data(41).dtTransOffset = 132;

                    ;% dexojrsdjj.jm1j3qtn2yy.R_Value
                    section.data(42).logicalSrcIdx = 101;
                    section.data(42).dtTransOffset = 133;

            nTotData = nTotData + section.nData;
            paramMap.sections(7) = section;
            clear section

            section.nData     = 114;
            section.data(114)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.takeoff_gain1_Gain
                    section.data(1).logicalSrcIdx = 102;
                    section.data(1).dtTransOffset = 0;

                    ;% dexojrsdjj.jm1j3qtn2yy.P_z1_Gain
                    section.data(2).logicalSrcIdx = 103;
                    section.data(2).dtTransOffset = 1;

                    ;% dexojrsdjj.jm1j3qtn2yy.D_z1_Gain
                    section.data(3).logicalSrcIdx = 104;
                    section.data(3).dtTransOffset = 2;

                    ;% dexojrsdjj.jm1j3qtn2yy.Pitchcorrection_Value
                    section.data(4).logicalSrcIdx = 105;
                    section.data(4).dtTransOffset = 3;

                    ;% dexojrsdjj.jm1j3qtn2yy.zerocorrection_Value
                    section.data(5).logicalSrcIdx = 106;
                    section.data(5).dtTransOffset = 4;

                    ;% dexojrsdjj.jm1j3qtn2yy.Gain_Gain
                    section.data(6).logicalSrcIdx = 107;
                    section.data(6).dtTransOffset = 5;

                    ;% dexojrsdjj.jm1j3qtn2yy._Value_a1qknq4gqc
                    section.data(7).logicalSrcIdx = 108;
                    section.data(7).dtTransOffset = 7;

                    ;% dexojrsdjj.jm1j3qtn2yy.X_Y0
                    section.data(8).logicalSrcIdx = 109;
                    section.data(8).dtTransOffset = 8;

                    ;% dexojrsdjj.jm1j3qtn2yy.Y_Y0
                    section.data(9).logicalSrcIdx = 110;
                    section.data(9).dtTransOffset = 9;

                    ;% dexojrsdjj.jm1j3qtn2yy.LandingLookaheaddistance_Value
                    section.data(10).logicalSrcIdx = 111;
                    section.data(10).dtTransOffset = 10;

                    ;% dexojrsdjj.jm1j3qtn2yy.Tocontroller_Y0
                    section.data(11).logicalSrcIdx = 112;
                    section.data(11).dtTransOffset = 11;

                    ;% dexojrsdjj.jm1j3qtn2yy.Gain_Gain_b4fi13u42n
                    section.data(12).logicalSrcIdx = 113;
                    section.data(12).dtTransOffset = 12;

                    ;% dexojrsdjj.jm1j3qtn2yy.Out1_Y0
                    section.data(13).logicalSrcIdx = 114;
                    section.data(13).dtTransOffset = 13;

                    ;% dexojrsdjj.jm1j3qtn2yy.Lykyhatkk1_Y0_eyt35rg0em
                    section.data(14).logicalSrcIdx = 115;
                    section.data(14).dtTransOffset = 14;

                    ;% dexojrsdjj.jm1j3qtn2yy.deltax_Y0_o51efr43sv
                    section.data(15).logicalSrcIdx = 116;
                    section.data(15).dtTransOffset = 15;

                    ;% dexojrsdjj.jm1j3qtn2yy.Gain_Gain_ho1mfgrgta
                    section.data(16).logicalSrcIdx = 117;
                    section.data(16).dtTransOffset = 16;

                    ;% dexojrsdjj.jm1j3qtn2yy.opticalFlowErrorCorrect_Gain
                    section.data(17).logicalSrcIdx = 118;
                    section.data(17).dtTransOffset = 17;

                    ;% dexojrsdjj.jm1j3qtn2yy.TorqueTotalThrustToThrustPerMotor_Value
                    section.data(18).logicalSrcIdx = 119;
                    section.data(18).dtTransOffset = 18;

                    ;% dexojrsdjj.jm1j3qtn2yy.A_Value_caldc4m5xg
                    section.data(19).logicalSrcIdx = 120;
                    section.data(19).dtTransOffset = 34;

                    ;% dexojrsdjj.jm1j3qtn2yy.SimplyIntegrateVelocity_gainval
                    section.data(20).logicalSrcIdx = 121;
                    section.data(20).dtTransOffset = 50;

                    ;% dexojrsdjj.jm1j3qtn2yy.SimplyIntegrateVelocity_IC
                    section.data(21).logicalSrcIdx = 122;
                    section.data(21).dtTransOffset = 51;

                    ;% dexojrsdjj.jm1j3qtn2yy.invertzaxisGain_Gain
                    section.data(22).logicalSrcIdx = 123;
                    section.data(22).dtTransOffset = 52;

                    ;% dexojrsdjj.jm1j3qtn2yy.prsToAltGain_Gain
                    section.data(23).logicalSrcIdx = 124;
                    section.data(23).dtTransOffset = 53;

                    ;% dexojrsdjj.jm1j3qtn2yy.pressureFilter_IIR_NumCoef
                    section.data(24).logicalSrcIdx = 125;
                    section.data(24).dtTransOffset = 54;

                    ;% dexojrsdjj.jm1j3qtn2yy.pressureFilter_IIR_DenCoef
                    section.data(25).logicalSrcIdx = 126;
                    section.data(25).dtTransOffset = 58;

                    ;% dexojrsdjj.jm1j3qtn2yy.pressureFilter_IIR_InitialStates
                    section.data(26).logicalSrcIdx = 127;
                    section.data(26).dtTransOffset = 62;

                    ;% dexojrsdjj.jm1j3qtn2yy.DiscreteTimeIntegrator_gainval
                    section.data(27).logicalSrcIdx = 128;
                    section.data(27).dtTransOffset = 63;

                    ;% dexojrsdjj.jm1j3qtn2yy.DiscreteTimeIntegrator_IC
                    section.data(28).logicalSrcIdx = 129;
                    section.data(28).dtTransOffset = 64;

                    ;% dexojrsdjj.jm1j3qtn2yy.X0_Value_fzmdd4t2me
                    section.data(29).logicalSrcIdx = 130;
                    section.data(29).dtTransOffset = 65;

                    ;% dexojrsdjj.jm1j3qtn2yy.Assumingthatthepreflightcalibrationwasdoneatlevelorientation_Bi
                    section.data(30).logicalSrcIdx = 131;
                    section.data(30).dtTransOffset = 67;

                    ;% dexojrsdjj.jm1j3qtn2yy.inverseIMU_gain_Gain
                    section.data(31).logicalSrcIdx = 132;
                    section.data(31).dtTransOffset = 73;

                    ;% dexojrsdjj.jm1j3qtn2yy.FIR_IMUaccel_InitialStates
                    section.data(32).logicalSrcIdx = 133;
                    section.data(32).dtTransOffset = 79;

                    ;% dexojrsdjj.jm1j3qtn2yy.FIR_IMUaccel_Coefficients
                    section.data(33).logicalSrcIdx = 134;
                    section.data(33).dtTransOffset = 80;

                    ;% dexojrsdjj.jm1j3qtn2yy.Gain2_Gain
                    section.data(34).logicalSrcIdx = 135;
                    section.data(34).dtTransOffset = 86;

                    ;% dexojrsdjj.jm1j3qtn2yy.Constant_Value_kgtvbv3vel
                    section.data(35).logicalSrcIdx = 136;
                    section.data(35).dtTransOffset = 87;

                    ;% dexojrsdjj.jm1j3qtn2yy.C_Value_ja3hmomix4
                    section.data(36).logicalSrcIdx = 137;
                    section.data(36).dtTransOffset = 88;

                    ;% dexojrsdjj.jm1j3qtn2yy.X0_Value_fijgukogl0
                    section.data(37).logicalSrcIdx = 138;
                    section.data(37).dtTransOffset = 90;

                    ;% dexojrsdjj.jm1j3qtn2yy.C_Value_aextrgwimz
                    section.data(38).logicalSrcIdx = 139;
                    section.data(38).dtTransOffset = 92;

                    ;% dexojrsdjj.jm1j3qtn2yy.LPFFcutoff40Hz1_NumCoef
                    section.data(39).logicalSrcIdx = 140;
                    section.data(39).dtTransOffset = 94;

                    ;% dexojrsdjj.jm1j3qtn2yy.LPFFcutoff40Hz1_DenCoef
                    section.data(40).logicalSrcIdx = 141;
                    section.data(40).dtTransOffset = 96;

                    ;% dexojrsdjj.jm1j3qtn2yy.LPFFcutoff40Hz1_InitialStates
                    section.data(41).logicalSrcIdx = 142;
                    section.data(41).dtTransOffset = 98;

                    ;% dexojrsdjj.jm1j3qtn2yy.LPFFcutoff40Hz_NumCoef
                    section.data(42).logicalSrcIdx = 143;
                    section.data(42).dtTransOffset = 99;

                    ;% dexojrsdjj.jm1j3qtn2yy.LPFFcutoff40Hz_DenCoef
                    section.data(43).logicalSrcIdx = 144;
                    section.data(43).dtTransOffset = 101;

                    ;% dexojrsdjj.jm1j3qtn2yy.LPFFcutoff40Hz_InitialStates
                    section.data(44).logicalSrcIdx = 145;
                    section.data(44).dtTransOffset = 103;

                    ;% dexojrsdjj.jm1j3qtn2yy.IIR_IMUgyro_r_NumCoef
                    section.data(45).logicalSrcIdx = 146;
                    section.data(45).dtTransOffset = 104;

                    ;% dexojrsdjj.jm1j3qtn2yy.IIR_IMUgyro_r_DenCoef
                    section.data(46).logicalSrcIdx = 147;
                    section.data(46).dtTransOffset = 110;

                    ;% dexojrsdjj.jm1j3qtn2yy.IIR_IMUgyro_r_InitialStates
                    section.data(47).logicalSrcIdx = 148;
                    section.data(47).dtTransOffset = 116;

                    ;% dexojrsdjj.jm1j3qtn2yy.Constant_Value_fhgabvhymz
                    section.data(48).logicalSrcIdx = 149;
                    section.data(48).dtTransOffset = 117;

                    ;% dexojrsdjj.jm1j3qtn2yy.X0_Value_eanqubky4i
                    section.data(49).logicalSrcIdx = 150;
                    section.data(49).dtTransOffset = 118;

                    ;% dexojrsdjj.jm1j3qtn2yy.C_Value_ptavciyd5d
                    section.data(50).logicalSrcIdx = 151;
                    section.data(50).dtTransOffset = 122;

                    ;% dexojrsdjj.jm1j3qtn2yy.Gain1_Gain
                    section.data(51).logicalSrcIdx = 152;
                    section.data(51).dtTransOffset = 130;

                    ;% dexojrsdjj.jm1j3qtn2yy.IIRgyroz_NumCoef
                    section.data(52).logicalSrcIdx = 153;
                    section.data(52).dtTransOffset = 131;

                    ;% dexojrsdjj.jm1j3qtn2yy.IIRgyroz_DenCoef
                    section.data(53).logicalSrcIdx = 154;
                    section.data(53).dtTransOffset = 137;

                    ;% dexojrsdjj.jm1j3qtn2yy.IIRgyroz_InitialStates
                    section.data(54).logicalSrcIdx = 155;
                    section.data(54).dtTransOffset = 143;

                    ;% dexojrsdjj.jm1j3qtn2yy.TSamp_WtEt
                    section.data(55).logicalSrcIdx = 156;
                    section.data(55).dtTransOffset = 144;

                    ;% dexojrsdjj.jm1j3qtn2yy.Delay_InitialCondition
                    section.data(56).logicalSrcIdx = 157;
                    section.data(56).dtTransOffset = 145;

                    ;% dexojrsdjj.jm1j3qtn2yy.Delay1_InitialCondition
                    section.data(57).logicalSrcIdx = 158;
                    section.data(57).dtTransOffset = 146;

                    ;% dexojrsdjj.jm1j3qtn2yy.B_Value_a5zlhfeqri
                    section.data(58).logicalSrcIdx = 159;
                    section.data(58).dtTransOffset = 147;

                    ;% dexojrsdjj.jm1j3qtn2yy.D_Value_kvwor5kgih
                    section.data(59).logicalSrcIdx = 160;
                    section.data(59).dtTransOffset = 155;

                    ;% dexojrsdjj.jm1j3qtn2yy.Integrator_gainval
                    section.data(60).logicalSrcIdx = 161;
                    section.data(60).dtTransOffset = 159;

                    ;% dexojrsdjj.jm1j3qtn2yy.LPF8HzCutoffFiltertoavoidoscillationsinducedbypositioncontrolle
                    section.data(61).logicalSrcIdx = 162;
                    section.data(61).dtTransOffset = 160;

                    ;% dexojrsdjj.jm1j3qtn2yy.LPF8HzCutoffFiltertoavoidoscillationsinducedbypositi_hrdn4uwk2k
                    section.data(62).logicalSrcIdx = 163;
                    section.data(62).dtTransOffset = 162;

                    ;% dexojrsdjj.jm1j3qtn2yy.LPF8HzCutoffFiltertoavoidoscillationsinducedbypositi_l2hvf45k5l
                    section.data(63).logicalSrcIdx = 164;
                    section.data(63).dtTransOffset = 164;

                    ;% dexojrsdjj.jm1j3qtn2yy.Integrator_gainval_n5ry45wkrm
                    section.data(64).logicalSrcIdx = 165;
                    section.data(64).dtTransOffset = 165;

                    ;% dexojrsdjj.jm1j3qtn2yy.Filter_gainval
                    section.data(65).logicalSrcIdx = 166;
                    section.data(65).dtTransOffset = 166;

                    ;% dexojrsdjj.jm1j3qtn2yy.w1_Value
                    section.data(66).logicalSrcIdx = 167;
                    section.data(66).dtTransOffset = 167;

                    ;% dexojrsdjj.jm1j3qtn2yy.DiscreteTimeIntegrator_gainval_htahfdendi
                    section.data(67).logicalSrcIdx = 168;
                    section.data(67).dtTransOffset = 168;

                    ;% dexojrsdjj.jm1j3qtn2yy.DiscreteTimeIntegrator_IC_msbs3ur1nn
                    section.data(68).logicalSrcIdx = 169;
                    section.data(68).dtTransOffset = 169;

                    ;% dexojrsdjj.jm1j3qtn2yy.DiscreteTimeIntegrator_UpperSat
                    section.data(69).logicalSrcIdx = 170;
                    section.data(69).dtTransOffset = 170;

                    ;% dexojrsdjj.jm1j3qtn2yy.DiscreteTimeIntegrator_LowerSat
                    section.data(70).logicalSrcIdx = 171;
                    section.data(70).dtTransOffset = 171;

                    ;% dexojrsdjj.jm1j3qtn2yy.SaturationThrust1_UpperSat
                    section.data(71).logicalSrcIdx = 172;
                    section.data(71).dtTransOffset = 172;

                    ;% dexojrsdjj.jm1j3qtn2yy.SaturationThrust1_LowerSat
                    section.data(72).logicalSrcIdx = 173;
                    section.data(72).dtTransOffset = 173;

                    ;% dexojrsdjj.jm1j3qtn2yy.Saturation_UpperSat
                    section.data(73).logicalSrcIdx = 174;
                    section.data(73).dtTransOffset = 174;

                    ;% dexojrsdjj.jm1j3qtn2yy.Saturation_LowerSat
                    section.data(74).logicalSrcIdx = 175;
                    section.data(74).dtTransOffset = 175;

                    ;% dexojrsdjj.jm1j3qtn2yy.P_yaw_Gain
                    section.data(75).logicalSrcIdx = 176;
                    section.data(75).dtTransOffset = 176;

                    ;% dexojrsdjj.jm1j3qtn2yy.DiscreteTimeIntegrator_gainval_f0s25ahkfx
                    section.data(76).logicalSrcIdx = 177;
                    section.data(76).dtTransOffset = 177;

                    ;% dexojrsdjj.jm1j3qtn2yy.DiscreteTimeIntegrator_IC_pbm1hhtqvq
                    section.data(77).logicalSrcIdx = 178;
                    section.data(77).dtTransOffset = 178;

                    ;% dexojrsdjj.jm1j3qtn2yy.D_yaw_Gain
                    section.data(78).logicalSrcIdx = 179;
                    section.data(78).dtTransOffset = 179;

                    ;% dexojrsdjj.jm1j3qtn2yy.ThrustToMotorCommand_Gain
                    section.data(79).logicalSrcIdx = 180;
                    section.data(79).dtTransOffset = 180;

                    ;% dexojrsdjj.jm1j3qtn2yy.Saturation5_UpperSat
                    section.data(80).logicalSrcIdx = 181;
                    section.data(80).dtTransOffset = 181;

                    ;% dexojrsdjj.jm1j3qtn2yy.Saturation5_LowerSat
                    section.data(81).logicalSrcIdx = 182;
                    section.data(81).dtTransOffset = 182;

                    ;% dexojrsdjj.jm1j3qtn2yy.MotorDirections_Gain
                    section.data(82).logicalSrcIdx = 183;
                    section.data(82).dtTransOffset = 183;

                    ;% dexojrsdjj.jm1j3qtn2yy.A_Value_hugwpn40hn
                    section.data(83).logicalSrcIdx = 184;
                    section.data(83).dtTransOffset = 187;

                    ;% dexojrsdjj.jm1j3qtn2yy.A_Value_dirgs0jcih
                    section.data(84).logicalSrcIdx = 185;
                    section.data(84).dtTransOffset = 191;

                    ;% dexojrsdjj.jm1j3qtn2yy.B_Value_nzy2ayizly
                    section.data(85).logicalSrcIdx = 186;
                    section.data(85).dtTransOffset = 195;

                    ;% dexojrsdjj.jm1j3qtn2yy.D_Value_n32ftiy3u4
                    section.data(86).logicalSrcIdx = 187;
                    section.data(86).dtTransOffset = 197;

                    ;% dexojrsdjj.jm1j3qtn2yy.B_Value_jwd4et5oc4
                    section.data(87).logicalSrcIdx = 188;
                    section.data(87).dtTransOffset = 198;

                    ;% dexojrsdjj.jm1j3qtn2yy.D_Value_badcmlupfe
                    section.data(88).logicalSrcIdx = 189;
                    section.data(88).dtTransOffset = 200;

                    ;% dexojrsdjj.jm1j3qtn2yy.ZeroGain_Gain
                    section.data(89).logicalSrcIdx = 190;
                    section.data(89).dtTransOffset = 201;

                    ;% dexojrsdjj.jm1j3qtn2yy.Constant1_Value
                    section.data(90).logicalSrcIdx = 191;
                    section.data(90).dtTransOffset = 202;

                    ;% dexojrsdjj.jm1j3qtn2yy.ZeroGain_Gain_irpg1exv2g
                    section.data(91).logicalSrcIdx = 192;
                    section.data(91).dtTransOffset = 203;

                    ;% dexojrsdjj.jm1j3qtn2yy.Constant1_Value_ofyhqgndi1
                    section.data(92).logicalSrcIdx = 193;
                    section.data(92).dtTransOffset = 204;

                    ;% dexojrsdjj.jm1j3qtn2yy.I_yaw_Gain
                    section.data(93).logicalSrcIdx = 194;
                    section.data(93).dtTransOffset = 205;

                    ;% dexojrsdjj.jm1j3qtn2yy.I_pr_Gain
                    section.data(94).logicalSrcIdx = 195;
                    section.data(94).dtTransOffset = 206;

                    ;% dexojrsdjj.jm1j3qtn2yy.Gain_Gain_f2qlemofmu
                    section.data(95).logicalSrcIdx = 196;
                    section.data(95).dtTransOffset = 207;

                    ;% dexojrsdjj.jm1j3qtn2yy.Gain1_Gain_jyhhd2kp1v
                    section.data(96).logicalSrcIdx = 197;
                    section.data(96).dtTransOffset = 208;

                    ;% dexojrsdjj.jm1j3qtn2yy.P0_Value_lorjtchq0h
                    section.data(97).logicalSrcIdx = 198;
                    section.data(97).dtTransOffset = 209;

                    ;% dexojrsdjj.jm1j3qtn2yy.G_Value_niitwfkw3r
                    section.data(98).logicalSrcIdx = 199;
                    section.data(98).dtTransOffset = 225;

                    ;% dexojrsdjj.jm1j3qtn2yy.Q_Value_bwzqdoztxj
                    section.data(99).logicalSrcIdx = 200;
                    section.data(99).dtTransOffset = 241;

                    ;% dexojrsdjj.jm1j3qtn2yy.H_Value_fcbo0bbe0o
                    section.data(100).logicalSrcIdx = 201;
                    section.data(100).dtTransOffset = 257;

                    ;% dexojrsdjj.jm1j3qtn2yy.N_Value_euvd4hdyc0
                    section.data(101).logicalSrcIdx = 202;
                    section.data(101).dtTransOffset = 265;

                    ;% dexojrsdjj.jm1j3qtn2yy.P0_Value_jvywrqreso
                    section.data(102).logicalSrcIdx = 203;
                    section.data(102).dtTransOffset = 273;

                    ;% dexojrsdjj.jm1j3qtn2yy.G_Value_ipnb05tv1e
                    section.data(103).logicalSrcIdx = 204;
                    section.data(103).dtTransOffset = 277;

                    ;% dexojrsdjj.jm1j3qtn2yy.Q_Value_fv3srdryh3
                    section.data(104).logicalSrcIdx = 205;
                    section.data(104).dtTransOffset = 281;

                    ;% dexojrsdjj.jm1j3qtn2yy.P0_Value_d434yflmkm
                    section.data(105).logicalSrcIdx = 206;
                    section.data(105).dtTransOffset = 285;

                    ;% dexojrsdjj.jm1j3qtn2yy.G_Value_n5mapt0iwl
                    section.data(106).logicalSrcIdx = 207;
                    section.data(106).dtTransOffset = 289;

                    ;% dexojrsdjj.jm1j3qtn2yy.Q_Value_c1ykmpcf5x
                    section.data(107).logicalSrcIdx = 208;
                    section.data(107).dtTransOffset = 293;

                    ;% dexojrsdjj.jm1j3qtn2yy.R_Value_faivl0w30i
                    section.data(108).logicalSrcIdx = 209;
                    section.data(108).dtTransOffset = 297;

                    ;% dexojrsdjj.jm1j3qtn2yy.H_Value_frsuidtfrj
                    section.data(109).logicalSrcIdx = 210;
                    section.data(109).dtTransOffset = 301;

                    ;% dexojrsdjj.jm1j3qtn2yy.N_Value_dpmnjpibau
                    section.data(110).logicalSrcIdx = 211;
                    section.data(110).dtTransOffset = 303;

                    ;% dexojrsdjj.jm1j3qtn2yy.H_Value_jf4b1p1jm3
                    section.data(111).logicalSrcIdx = 212;
                    section.data(111).dtTransOffset = 305;

                    ;% dexojrsdjj.jm1j3qtn2yy.N_Value_lgdtnawhza
                    section.data(112).logicalSrcIdx = 213;
                    section.data(112).dtTransOffset = 307;

                    ;% dexojrsdjj.jm1j3qtn2yy.R_Value_ftckeksrsb
                    section.data(113).logicalSrcIdx = 214;
                    section.data(113).dtTransOffset = 309;

                    ;% dexojrsdjj.jm1j3qtn2yy.R_Value_lrjund3law
                    section.data(114).logicalSrcIdx = 215;
                    section.data(114).dtTransOffset = 310;

            nTotData = nTotData + section.nData;
            paramMap.sections(8) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.Output_InitialCondition
                    section.data(1).logicalSrcIdx = 216;
                    section.data(1).dtTransOffset = 0;

                    ;% dexojrsdjj.jm1j3qtn2yy.Output_InitialCondition_hwd34brton
                    section.data(2).logicalSrcIdx = 217;
                    section.data(2).dtTransOffset = 1;

                    ;% dexojrsdjj.jm1j3qtn2yy.Output_InitialCondition_e2zmhmlb1z
                    section.data(3).logicalSrcIdx = 218;
                    section.data(3).dtTransOffset = 2;

                    ;% dexojrsdjj.jm1j3qtn2yy.Output_InitialCondition_mvkhzywkl5
                    section.data(4).logicalSrcIdx = 219;
                    section.data(4).dtTransOffset = 3;

                    ;% dexojrsdjj.jm1j3qtn2yy.FixPtConstant_Value
                    section.data(5).logicalSrcIdx = 220;
                    section.data(5).dtTransOffset = 4;

                    ;% dexojrsdjj.jm1j3qtn2yy.Constant_Value_d10ueu2lgw
                    section.data(6).logicalSrcIdx = 221;
                    section.data(6).dtTransOffset = 5;

                    ;% dexojrsdjj.jm1j3qtn2yy.FixPtConstant_Value_amt0qr0v41
                    section.data(7).logicalSrcIdx = 222;
                    section.data(7).dtTransOffset = 6;

                    ;% dexojrsdjj.jm1j3qtn2yy.Constant_Value_ao3cb2pz1r
                    section.data(8).logicalSrcIdx = 223;
                    section.data(8).dtTransOffset = 7;

                    ;% dexojrsdjj.jm1j3qtn2yy.FixPtConstant_Value_mxtyua0puo
                    section.data(9).logicalSrcIdx = 224;
                    section.data(9).dtTransOffset = 8;

                    ;% dexojrsdjj.jm1j3qtn2yy.Constant_Value_ib4tf4fdz0
                    section.data(10).logicalSrcIdx = 225;
                    section.data(10).dtTransOffset = 9;

                    ;% dexojrsdjj.jm1j3qtn2yy.FixPtConstant_Value_fryyqixgsg
                    section.data(11).logicalSrcIdx = 226;
                    section.data(11).dtTransOffset = 10;

                    ;% dexojrsdjj.jm1j3qtn2yy.Constant_Value_nzy1msvwgy
                    section.data(12).logicalSrcIdx = 227;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            paramMap.sections(9) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.Output_InitialCondition_pqnzrneezd
                    section.data(1).logicalSrcIdx = 228;
                    section.data(1).dtTransOffset = 0;

                    ;% dexojrsdjj.jm1j3qtn2yy.FixPtConstant_Value_o0qklh4qta
                    section.data(2).logicalSrcIdx = 229;
                    section.data(2).dtTransOffset = 1;

                    ;% dexojrsdjj.jm1j3qtn2yy.Constant_Value_hla1l2yini
                    section.data(3).logicalSrcIdx = 230;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            paramMap.sections(10) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.controlModePosVsOrient_Value
                    section.data(1).logicalSrcIdx = 231;
                    section.data(1).dtTransOffset = 0;

                    ;% dexojrsdjj.jm1j3qtn2yy.isSqrtUsed_Value
                    section.data(2).logicalSrcIdx = 232;
                    section.data(2).dtTransOffset = 1;

                    ;% dexojrsdjj.jm1j3qtn2yy.isSqrtUsed_Value_fws2u5an23
                    section.data(3).logicalSrcIdx = 233;
                    section.data(3).dtTransOffset = 2;

                    ;% dexojrsdjj.jm1j3qtn2yy.isSqrtUsed_Value_jfkfmlrzud
                    section.data(4).logicalSrcIdx = 234;
                    section.data(4).dtTransOffset = 3;

                    ;% dexojrsdjj.jm1j3qtn2yy.isSqrtUsed_Value_h1ge2kuzjh
                    section.data(5).logicalSrcIdx = 235;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            paramMap.sections(11) = section;
            clear section

            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.Landed_Value
                    section.data(1).logicalSrcIdx = 236;
                    section.data(1).dtTransOffset = 0;

                    ;% dexojrsdjj.jm1j3qtn2yy.No_error_Value
                    section.data(2).logicalSrcIdx = 237;
                    section.data(2).dtTransOffset = 1;

                    ;% dexojrsdjj.jm1j3qtn2yy.Out1_Y0_ewiwzwpf1a
                    section.data(3).logicalSrcIdx = 238;
                    section.data(3).dtTransOffset = 2;

                    ;% dexojrsdjj.jm1j3qtn2yy.Disabletemperaturecompensation_CurrentSetting
                    section.data(4).logicalSrcIdx = 239;
                    section.data(4).dtTransOffset = 3;

                    ;% dexojrsdjj.jm1j3qtn2yy.ManualSwitch_CurrentSetting
                    section.data(5).logicalSrcIdx = 240;
                    section.data(5).dtTransOffset = 4;

                    ;% dexojrsdjj.jm1j3qtn2yy.Merge_InitialOutput
                    section.data(6).logicalSrcIdx = 241;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            paramMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.fvhfpojcks.deltax_Y0
                    section.data(1).logicalSrcIdx = 242;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(13) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.iwathvg4k3.Lykyhatkk1_Y0
                    section.data(1).logicalSrcIdx = 243;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.jpk2mxpeatj.deltax_Y0
                    section.data(1).logicalSrcIdx = 244;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.nrhx2vy53hy.Lykyhatkk1_Y0
                    section.data(1).logicalSrcIdx = 245;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.klg1wfhcf2.Constant_Value
                    section.data(1).logicalSrcIdx = 246;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.ibwpquq4ea.Constant_Value
                    section.data(1).logicalSrcIdx = 247;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.d20kj2hsf2.Constant_Value
                    section.data(1).logicalSrcIdx = 248;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(19) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% dexojrsdjj.jm1j3qtn2yy.ktttmyfu4q3.Constant_Value
                    section.data(1).logicalSrcIdx = 249;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            paramMap.sections(20) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 15;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (ntrh2fpvwnc)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.hu0gfi4fj5
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.gssw42nzfj
                    section.data(1).logicalSrcIdx = 6;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.nhe4wpgcph
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.mfouorxv0f
                    section.data(2).logicalSrcIdx = 3;
                    section.data(2).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            sigMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.bclp3gchxq
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.p5tx3tby1d
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(5) = section;
            clear section

            section.nData     = 18;
            section.data(18)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.omcikf1rhr
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.hgkpp3yte0
                    section.data(2).logicalSrcIdx = 7;
                    section.data(2).dtTransOffset = 1;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.izyplazhl5
                    section.data(3).logicalSrcIdx = 8;
                    section.data(3).dtTransOffset = 2;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.nggifp1oan
                    section.data(4).logicalSrcIdx = 9;
                    section.data(4).dtTransOffset = 3;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.dufxgc5h0o
                    section.data(5).logicalSrcIdx = 10;
                    section.data(5).dtTransOffset = 6;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.j1ixnycvew
                    section.data(6).logicalSrcIdx = 11;
                    section.data(6).dtTransOffset = 7;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.lw4pymc05z
                    section.data(7).logicalSrcIdx = 12;
                    section.data(7).dtTransOffset = 8;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.po0be0jbep
                    section.data(8).logicalSrcIdx = 13;
                    section.data(8).dtTransOffset = 11;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.o1nuphe2tb
                    section.data(9).logicalSrcIdx = 14;
                    section.data(9).dtTransOffset = 13;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.n3w4g2k200
                    section.data(10).logicalSrcIdx = 15;
                    section.data(10).dtTransOffset = 17;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.lip1w3qso4
                    section.data(11).logicalSrcIdx = 16;
                    section.data(11).dtTransOffset = 18;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.ena0s0j2f1
                    section.data(12).logicalSrcIdx = 17;
                    section.data(12).dtTransOffset = 30;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.hwps5oivxk
                    section.data(13).logicalSrcIdx = 18;
                    section.data(13).dtTransOffset = 32;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.cw255cpkpg
                    section.data(14).logicalSrcIdx = 19;
                    section.data(14).dtTransOffset = 36;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.pmz2bzc5gb
                    section.data(15).logicalSrcIdx = 20;
                    section.data(15).dtTransOffset = 40;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.nq3st30xn4
                    section.data(16).logicalSrcIdx = 21;
                    section.data(16).dtTransOffset = 41;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.gpnaeyoesy
                    section.data(17).logicalSrcIdx = 22;
                    section.data(17).dtTransOffset = 44;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.o4h34mv3wv
                    section.data(18).logicalSrcIdx = 23;
                    section.data(18).dtTransOffset = 45;

            nTotData = nTotData + section.nData;
            sigMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.ih2blnvzci
                    section.data(1).logicalSrcIdx = 24;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(7) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.kpzvlz2z23
                    section.data(1).logicalSrcIdx = 25;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(8) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.knh4njyhbv
                    section.data(1).logicalSrcIdx = 26;
                    section.data(1).dtTransOffset = 0;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.ofip5geil3
                    section.data(2).logicalSrcIdx = 27;
                    section.data(2).dtTransOffset = 1;

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.c15ptvyglu
                    section.data(3).logicalSrcIdx = 28;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            sigMap.sections(9) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.fvhfpojcks.dili3ppzo1
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(10) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.iwathvg4k3.cxh0kyps4s
                    section.data(1).logicalSrcIdx = 30;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.jpk2mxpeatj.dili3ppzo1
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(12) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% ntrh2fpvwnc.jm1j3qtn2yy.nrhx2vy53hy.cxh0kyps4s
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            sigMap.sections(13) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%

                        ;% motors_outport
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 257;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        sigMap.sections(14) = section;
                        clear section


                        ;% flag_outport
                        section.nData = 1;
                        section.data(1).logicalSrcIdx = 258;
                        section.data(1).dtTransOffset = 0;

                        nTotData = nTotData + section.nData;
                        sigMap.sections(15) = section;
                        clear section



        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 26;
        sectIdxOffset = 15;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (cjyyyt0pe2y)
        ;%
            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.adkargetc2
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.iiwhcel3vp
                    section.data(1).logicalSrcIdx = 1;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.hvkcnsgbbz
                    section.data(1).logicalSrcIdx = 2;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.ojzwywsqra
                    section.data(1).logicalSrcIdx = 3;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.dshw0451cv
                    section.data(1).logicalSrcIdx = 4;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.jddw2e1lts
                    section.data(1).logicalSrcIdx = 5;
                    section.data(1).dtTransOffset = 0;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.ktgyjjl5ed
                    section.data(2).logicalSrcIdx = 6;
                    section.data(2).dtTransOffset = 1;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.jy545kiqn4
                    section.data(3).logicalSrcIdx = 7;
                    section.data(3).dtTransOffset = 3;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.k0iwtffyaz
                    section.data(4).logicalSrcIdx = 8;
                    section.data(4).dtTransOffset = 6;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.dqkygzvut2.LoggedData
                    section.data(1).logicalSrcIdx = 10;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(7) = section;
            clear section

            section.nData     = 20;
            section.data(20)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.fzgdkn0rhz
                    section.data(1).logicalSrcIdx = 11;
                    section.data(1).dtTransOffset = 0;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.c5otacwsjg
                    section.data(2).logicalSrcIdx = 12;
                    section.data(2).dtTransOffset = 2;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.la1scn43u3
                    section.data(3).logicalSrcIdx = 13;
                    section.data(3).dtTransOffset = 5;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.ckqaytyfre
                    section.data(4).logicalSrcIdx = 14;
                    section.data(4).dtTransOffset = 6;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.ft4htfrlsi
                    section.data(5).logicalSrcIdx = 15;
                    section.data(5).dtTransOffset = 8;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.nsldbhxncg
                    section.data(6).logicalSrcIdx = 16;
                    section.data(6).dtTransOffset = 23;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.k0k0v1dkgm
                    section.data(7).logicalSrcIdx = 17;
                    section.data(7).dtTransOffset = 25;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.acyxwrhweo
                    section.data(8).logicalSrcIdx = 18;
                    section.data(8).dtTransOffset = 26;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.ei5iq1pj2p
                    section.data(9).logicalSrcIdx = 19;
                    section.data(9).dtTransOffset = 27;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.nb424nmp4e
                    section.data(10).logicalSrcIdx = 20;
                    section.data(10).dtTransOffset = 32;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.dsl0qzq4cx
                    section.data(11).logicalSrcIdx = 21;
                    section.data(11).dtTransOffset = 36;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.bh4dmm2k0j
                    section.data(12).logicalSrcIdx = 22;
                    section.data(12).dtTransOffset = 46;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.gsmbendnev
                    section.data(13).logicalSrcIdx = 23;
                    section.data(13).dtTransOffset = 48;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.l32u4lmabb
                    section.data(14).logicalSrcIdx = 24;
                    section.data(14).dtTransOffset = 50;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.jr5cawdnhp
                    section.data(15).logicalSrcIdx = 25;
                    section.data(15).dtTransOffset = 52;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.bnwnuugkq2
                    section.data(16).logicalSrcIdx = 26;
                    section.data(16).dtTransOffset = 54;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.j023yqqgd3
                    section.data(17).logicalSrcIdx = 27;
                    section.data(17).dtTransOffset = 56;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.be2vhvgzth
                    section.data(18).logicalSrcIdx = 28;
                    section.data(18).dtTransOffset = 58;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.npbgxdytea
                    section.data(19).logicalSrcIdx = 29;
                    section.data(19).dtTransOffset = 60;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.nuznvaceod
                    section.data(20).logicalSrcIdx = 30;
                    section.data(20).dtTransOffset = 61;

            nTotData = nTotData + section.nData;
            dworkMap.sections(8) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.embrntxwjr
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(9) = section;
            clear section

            section.nData     = 4;
            section.data(4)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.i4jfs3ko3x
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.gumtbuz13b
                    section.data(2).logicalSrcIdx = 33;
                    section.data(2).dtTransOffset = 1;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.iumfhwoooa
                    section.data(3).logicalSrcIdx = 34;
                    section.data(3).dtTransOffset = 2;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.a4sdnpsyy1
                    section.data(4).logicalSrcIdx = 35;
                    section.data(4).dtTransOffset = 3;

            nTotData = nTotData + section.nData;
            dworkMap.sections(10) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.gd1y41xxwm
                    section.data(1).logicalSrcIdx = 40;
                    section.data(1).dtTransOffset = 0;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.bkufxmzhhl
                    section.data(2).logicalSrcIdx = 41;
                    section.data(2).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(11) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.ntdd0ouhsr
                    section.data(1).logicalSrcIdx = 42;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(12) = section;
            clear section

            section.nData     = 11;
            section.data(11)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.eu04xlwawv
                    section.data(1).logicalSrcIdx = 43;
                    section.data(1).dtTransOffset = 0;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.icccx3wrnq
                    section.data(2).logicalSrcIdx = 44;
                    section.data(2).dtTransOffset = 1;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.opz0bgmvw5
                    section.data(3).logicalSrcIdx = 45;
                    section.data(3).dtTransOffset = 2;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.iwv2sgicyy
                    section.data(4).logicalSrcIdx = 46;
                    section.data(4).dtTransOffset = 3;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.axuyce2lwe
                    section.data(5).logicalSrcIdx = 47;
                    section.data(5).dtTransOffset = 4;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.hfbfnet4bp
                    section.data(6).logicalSrcIdx = 48;
                    section.data(6).dtTransOffset = 5;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.hj5g0vnemh
                    section.data(7).logicalSrcIdx = 49;
                    section.data(7).dtTransOffset = 6;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.fxo4avg42i
                    section.data(8).logicalSrcIdx = 50;
                    section.data(8).dtTransOffset = 7;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.mn2dowrdv0
                    section.data(9).logicalSrcIdx = 51;
                    section.data(9).dtTransOffset = 8;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.ikygatbaok
                    section.data(10).logicalSrcIdx = 52;
                    section.data(10).dtTransOffset = 9;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.oyihniadhe
                    section.data(11).logicalSrcIdx = 53;
                    section.data(11).dtTransOffset = 10;

            nTotData = nTotData + section.nData;
            dworkMap.sections(13) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.libn5wds1o
                    section.data(1).logicalSrcIdx = 54;
                    section.data(1).dtTransOffset = 0;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.nvo2wyywnh
                    section.data(2).logicalSrcIdx = 55;
                    section.data(2).dtTransOffset = 1;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.om5oefosdq
                    section.data(3).logicalSrcIdx = 56;
                    section.data(3).dtTransOffset = 2;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.hvjsykenkh
                    section.data(4).logicalSrcIdx = 57;
                    section.data(4).dtTransOffset = 3;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.d1tz3yp53o
                    section.data(5).logicalSrcIdx = 58;
                    section.data(5).dtTransOffset = 4;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.n2rlqh3ddz
                    section.data(6).logicalSrcIdx = 59;
                    section.data(6).dtTransOffset = 5;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.l0drwkyn3i
                    section.data(7).logicalSrcIdx = 60;
                    section.data(7).dtTransOffset = 6;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.jh5u1jolg0
                    section.data(8).logicalSrcIdx = 61;
                    section.data(8).dtTransOffset = 7;

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.felgke0lbm
                    section.data(9).logicalSrcIdx = 62;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            dworkMap.sections(14) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.fvhfpojcks.jiv5ss2xhb
                    section.data(1).logicalSrcIdx = 63;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(15) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.fvhfpojcks.ktjt4mndsb
                    section.data(1).logicalSrcIdx = 64;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(16) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.iwathvg4k3.bfetqwusp4
                    section.data(1).logicalSrcIdx = 65;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(17) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.iwathvg4k3.gcdzr1ldwb
                    section.data(1).logicalSrcIdx = 66;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(18) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.jpk2mxpeatj.jiv5ss2xhb
                    section.data(1).logicalSrcIdx = 67;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(19) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.jpk2mxpeatj.ktjt4mndsb
                    section.data(1).logicalSrcIdx = 68;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(20) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.nrhx2vy53hy.bfetqwusp4
                    section.data(1).logicalSrcIdx = 69;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(21) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.nrhx2vy53hy.gcdzr1ldwb
                    section.data(1).logicalSrcIdx = 70;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(22) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.klg1wfhcf2.n1onaucoct
                    section.data(1).logicalSrcIdx = 71;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(23) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.ibwpquq4ea.n1onaucoct
                    section.data(1).logicalSrcIdx = 72;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(24) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.d20kj2hsf2.n1onaucoct
                    section.data(1).logicalSrcIdx = 73;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(25) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% cjyyyt0pe2y.jm1j3qtn2yy.ktttmyfu4q3.n1onaucoct
                    section.data(1).logicalSrcIdx = 74;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(26) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1394790998;
    targMap.checksum1 = 1812820552;
    targMap.checksum2 = 235057708;
    targMap.checksum3 = 545090251;

