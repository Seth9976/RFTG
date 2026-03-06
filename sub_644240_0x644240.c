// 函数名称: sub_644240
// 虚拟地址: 0x644240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_644240(int32_t arg1, int32_t arg2, double arg3, int32_t* arg4, int32_t* arg5, double* arg6, int32_t arg7)
{
    // 第一条实际指令: long double x87_r7_1 = fconvert.t(arg3) * fconvert.t(0.017453292519943295)
    long double x87_r7_1 = fconvert.t(arg3) * fconvert.t(0.017453292519943295)
    double* esi = arg7
    *esi = fconvert.d(boost::math::detail::iconv_imp<long double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
        fconvert.d(x87_r7_1)))
    long double st0_1 = boost::math::detail::iconv<double,struct boost::math::policies::policy<struct boost::math::policies::promote_float<0>,struct boost::math::policies::promote_double<0>,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy,struct boost::math::policies::default_policy> >(
        fconvert.d(fconvert.t(fconvert.d(x87_r7_1))))
    *arg6 = fconvert.d(st0_1)
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(arg1)
    long double x87_r6 = float.t((eax_2 - edx) s>> 1)
    int32_t eax_6
    int32_t edx_1
    edx_1:eax_6 = sx.q(arg2)
    long double x87_r5 = float.t((eax_6 - edx_1) s>> 1)
    long double x87_r4_1 = st0_1 * x87_r6
    double var_2c = fconvert.d(x87_r4_1)
    double var_24 = fconvert.d(st0_1 * x87_r5)
    double var_1c = fconvert.d(x87_r6 * fconvert.t(*esi))
    long double x87_r6_3 = x87_r5 * fconvert.t(*esi)
    double var_34 = fconvert.d(x87_r6_3)
    long double x87_r7_6 = x87_r4_1 + x87_r6_3
    arg3 = fconvert.d(x87_r7_6)
    double var_3c = fconvert.d(abs(fconvert.d(x87_r7_6)))
    long double x87_r7_9 = fconvert.t(var_2c) - fconvert.t(var_34)
    double var_c = fconvert.d(x87_r7_9)
    long double st0_3 = abs(fconvert.d(x87_r7_9))
    long double temp1 = fconvert.t(var_3c)
    st0_3 - temp1
    int32_t eax_8
    eax_8.w = (st0_3 < temp1 ? 1 : 0) << 8 | (is_unordered.t(st0_3, temp1) ? 1 : 0) << 0xa
        | (st0_3 == temp1 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r7_11
    
    if (p)
        x87_r7_11 = fconvert.t(var_c)
    else
        x87_r7_11 = fconvert.t(arg3)
    
    double var_3c_1 = fconvert.d(abs(fconvert.d(x87_r7_11)))
    long double x87_r7_14 = fconvert.t(var_34) - fconvert.t(var_2c)
    double var_14 = fconvert.d(x87_r7_14)
    long double st0_5 = abs(fconvert.d(x87_r7_14))
    long double temp2 = fconvert.t(var_3c_1)
    st0_5 - temp2
    eax_8.w = (st0_5 < temp2 ? 1 : 0) << 8 | (is_unordered.t(st0_5, temp2) ? 1 : 0) << 0xa
        | (st0_5 == temp2 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x5}
    long double x87_r7_20
    
    if (p_1)
        x87_r7_20 = fconvert.t(var_14)
    else
        double var_3c_2 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
        long double st0_7 = abs(fconvert.d(fconvert.t(var_c)))
        long double temp3_1 = fconvert.t(var_3c_2)
        st0_7 - temp3_1
        eax_8.w = (st0_7 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(st0_7, temp3_1) ? 1 : 0) << 0xa
            | (st0_7 == temp3_1 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (p_2)
            x87_r7_20 = fconvert.t(var_c)
        else
            x87_r7_20 = fconvert.t(arg3)
    
    double var_3c_3 = fconvert.d(abs(fconvert.d(x87_r7_20)))
    long double x87_r7_24 = fneg(fconvert.t(var_2c)) - fconvert.t(var_34)
    double var_34_1 = fconvert.d(x87_r7_24)
    long double st0_9 = abs(fconvert.d(x87_r7_24))
    long double temp4 = fconvert.t(var_3c_3)
    st0_9 - temp4
    eax_8.w = (st0_9 < temp4 ? 1 : 0) << 8 | (is_unordered.t(st0_9, temp4) ? 1 : 0) << 0xa
        | (st0_9 == temp4 ? 1 : 0) << 0xe
    bool p_3 = unimplemented  {test ah, 0x5}
    long double x87_r7_38
    
    if (p_3)
        x87_r7_38 = fconvert.t(var_34_1)
    else
        double var_3c_4 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
        long double st0_11 = abs(fconvert.d(fconvert.t(var_c)))
        long double temp5_1 = fconvert.t(var_3c_4)
        st0_11 - temp5_1
        eax_8.w = (st0_11 < temp5_1 ? 1 : 0) << 8 | (is_unordered.t(st0_11, temp5_1) ? 1 : 0) << 0xa
            | (st0_11 == temp5_1 ? 1 : 0) << 0xe
        bool p_4 = unimplemented  {test ah, 0x5}
        long double x87_r7_30
        
        if (p_4)
            x87_r7_30 = fconvert.t(var_c)
        else
            x87_r7_30 = fconvert.t(arg3)
        
        double var_3c_5 = fconvert.d(abs(fconvert.d(x87_r7_30)))
        long double st0_13 = abs(fconvert.d(fconvert.t(var_14)))
        long double temp7_1 = fconvert.t(var_3c_5)
        st0_13 - temp7_1
        eax_8.w = (st0_13 < temp7_1 ? 1 : 0) << 8 | (is_unordered.t(st0_13, temp7_1) ? 1 : 0) << 0xa
            | (st0_13 == temp7_1 ? 1 : 0) << 0xe
        bool p_5 = unimplemented  {test ah, 0x5}
        
        if (p_5)
            x87_r7_38 = fconvert.t(var_14)
        else
            double var_3c_6 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
            long double st0_15 = abs(fconvert.d(fconvert.t(var_c)))
            long double temp9_1 = fconvert.t(var_3c_6)
            st0_15 - temp9_1
            eax_8.w = (st0_15 < temp9_1 ? 1 : 0) << 8 | (is_unordered.t(st0_15, temp9_1) ? 1 : 0) << 0xa
                | (st0_15 == temp9_1 ? 1 : 0) << 0xe
            bool p_6 = unimplemented  {test ah, 0x5}
            
            if (p_6)
                x87_r7_38 = fconvert.t(var_c)
            else
                x87_r7_38 = fconvert.t(arg3)
    
    int32_t eax_9
    int32_t esi_1
    
    if (sub_685f40(sub_5dec60(fconvert.d(abs(fconvert.d(x87_r7_38))))) s<= 1)
        esi_1 = 1
    else
        double var_3c_7 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
        long double st0_19 = abs(fconvert.d(fconvert.t(var_c)))
        long double temp6_1 = fconvert.t(var_3c_7)
        st0_19 - temp6_1
        eax_9.w = (st0_19 < temp6_1 ? 1 : 0) << 8 | (is_unordered.t(st0_19, temp6_1) ? 1 : 0) << 0xa
            | (st0_19 == temp6_1 ? 1 : 0) << 0xe
        bool p_7 = unimplemented  {test ah, 0x5}
        long double x87_r7_45
        
        if (p_7)
            x87_r7_45 = fconvert.t(var_c)
        else
            x87_r7_45 = fconvert.t(arg3)
        
        double var_3c_8 = fconvert.d(abs(fconvert.d(x87_r7_45)))
        long double st0_21 = abs(fconvert.d(fconvert.t(var_14)))
        long double temp10_1 = fconvert.t(var_3c_8)
        st0_21 - temp10_1
        eax_9.w = (st0_21 < temp10_1 ? 1 : 0) << 8 | (is_unordered.t(st0_21, temp10_1) ? 1 : 0) << 0xa
            | (st0_21 == temp10_1 ? 1 : 0) << 0xe
        bool p_8 = unimplemented  {test ah, 0x5}
        long double x87_r7_53
        
        if (p_8)
            x87_r7_53 = fconvert.t(var_14)
        else
            double var_3c_9 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
            long double st0_23 = abs(fconvert.d(fconvert.t(var_c)))
            long double temp12_1 = fconvert.t(var_3c_9)
            st0_23 - temp12_1
            eax_9.w = (st0_23 < temp12_1 ? 1 : 0) << 8
                | (is_unordered.t(st0_23, temp12_1) ? 1 : 0) << 0xa
                | (st0_23 == temp12_1 ? 1 : 0) << 0xe
            bool p_9 = unimplemented  {test ah, 0x5}
            
            if (p_9)
                x87_r7_53 = fconvert.t(var_c)
            else
                x87_r7_53 = fconvert.t(arg3)
        
        double var_3c_10 = fconvert.d(abs(fconvert.d(x87_r7_53)))
        long double st0_25 = abs(fconvert.d(fconvert.t(var_34_1)))
        long double temp14_1 = fconvert.t(var_3c_10)
        st0_25 - temp14_1
        eax_9.w = (st0_25 < temp14_1 ? 1 : 0) << 8 | (is_unordered.t(st0_25, temp14_1) ? 1 : 0) << 0xa
            | (st0_25 == temp14_1 ? 1 : 0) << 0xe
        bool p_10 = unimplemented  {test ah, 0x5}
        long double x87_r7_69
        
        if (p_10)
            x87_r7_69 = fconvert.t(var_34_1)
        else
            double var_3c_11 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
            long double st0_27 = abs(fconvert.d(fconvert.t(var_c)))
            long double temp16_1 = fconvert.t(var_3c_11)
            st0_27 - temp16_1
            eax_9.w = (st0_27 < temp16_1 ? 1 : 0) << 8
                | (is_unordered.t(st0_27, temp16_1) ? 1 : 0) << 0xa
                | (st0_27 == temp16_1 ? 1 : 0) << 0xe
            bool p_11 = unimplemented  {test ah, 0x5}
            long double x87_r7_61
            
            if (p_11)
                x87_r7_61 = fconvert.t(var_c)
            else
                x87_r7_61 = fconvert.t(arg3)
            
            double var_3c_12 = fconvert.d(abs(fconvert.d(x87_r7_61)))
            long double st0_29 = abs(fconvert.d(fconvert.t(var_14)))
            long double temp18_1 = fconvert.t(var_3c_12)
            st0_29 - temp18_1
            eax_9.w = (st0_29 < temp18_1 ? 1 : 0) << 8
                | (is_unordered.t(st0_29, temp18_1) ? 1 : 0) << 0xa
                | (st0_29 == temp18_1 ? 1 : 0) << 0xe
            bool p_12 = unimplemented  {test ah, 0x5}
            
            if (p_12)
                x87_r7_69 = fconvert.t(var_14)
            else
                double var_3c_13 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
                long double st0_31 = abs(fconvert.d(fconvert.t(var_c)))
                long double temp21_1 = fconvert.t(var_3c_13)
                st0_31 - temp21_1
                eax_9.w = (st0_31 < temp21_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_31, temp21_1) ? 1 : 0) << 0xa
                    | (st0_31 == temp21_1 ? 1 : 0) << 0xe
                bool p_13 = unimplemented  {test ah, 0x5}
                
                if (p_13)
                    x87_r7_69 = fconvert.t(var_c)
                else
                    x87_r7_69 = fconvert.t(arg3)
        
        esi_1 = sub_685f40(sub_5dec60(fconvert.d(abs(fconvert.d(x87_r7_69)))))
    
    long double x87_r7_73 = fconvert.t(var_1c) + fconvert.t(var_24)
    arg3 = fconvert.d(x87_r7_73)
    double var_3c_14 = fconvert.d(abs(fconvert.d(x87_r7_73)))
    long double x87_r7_76 = fconvert.t(var_1c) - fconvert.t(var_24)
    double var_c_1 = fconvert.d(x87_r7_76)
    long double st0_35 = abs(fconvert.d(x87_r7_76))
    long double temp8 = fconvert.t(var_3c_14)
    st0_35 - temp8
    eax_9.w = (st0_35 < temp8 ? 1 : 0) << 8 | (is_unordered.t(st0_35, temp8) ? 1 : 0) << 0xa
        | (st0_35 == temp8 ? 1 : 0) << 0xe
    bool p_14 = unimplemented  {test ah, 0x5}
    long double x87_r7_78
    
    if (p_14)
        x87_r7_78 = fconvert.t(var_c_1)
    else
        x87_r7_78 = fconvert.t(arg3)
    
    double var_3c_15 = fconvert.d(abs(fconvert.d(x87_r7_78)))
    long double x87_r7_81 = fconvert.t(var_24) - fconvert.t(var_1c)
    double var_14_1 = fconvert.d(x87_r7_81)
    long double st0_37 = abs(fconvert.d(x87_r7_81))
    long double temp11 = fconvert.t(var_3c_15)
    st0_37 - temp11
    eax_9.w = (st0_37 < temp11 ? 1 : 0) << 8 | (is_unordered.t(st0_37, temp11) ? 1 : 0) << 0xa
        | (st0_37 == temp11 ? 1 : 0) << 0xe
    bool p_15 = unimplemented  {test ah, 0x5}
    long double x87_r7_87
    
    if (p_15)
        x87_r7_87 = fconvert.t(var_14_1)
    else
        double var_3c_16 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
        long double st0_39 = abs(fconvert.d(fconvert.t(var_c_1)))
        long double temp13_1 = fconvert.t(var_3c_16)
        st0_39 - temp13_1
        eax_9.w = (st0_39 < temp13_1 ? 1 : 0) << 8 | (is_unordered.t(st0_39, temp13_1) ? 1 : 0) << 0xa
            | (st0_39 == temp13_1 ? 1 : 0) << 0xe
        bool p_16 = unimplemented  {test ah, 0x5}
        
        if (p_16)
            x87_r7_87 = fconvert.t(var_c_1)
        else
            x87_r7_87 = fconvert.t(arg3)
    
    double var_3c_17 = fconvert.d(abs(fconvert.d(x87_r7_87)))
    long double x87_r7_91 = fneg(fconvert.t(var_1c)) - fconvert.t(var_24)
    double var_34_2 = fconvert.d(x87_r7_91)
    long double st0_41 = abs(fconvert.d(x87_r7_91))
    long double temp15 = fconvert.t(var_3c_17)
    st0_41 - temp15
    eax_9.w = (st0_41 < temp15 ? 1 : 0) << 8 | (is_unordered.t(st0_41, temp15) ? 1 : 0) << 0xa
        | (st0_41 == temp15 ? 1 : 0) << 0xe
    bool p_17 = unimplemented  {test ah, 0x5}
    long double x87_r7_105
    
    if (p_17)
        x87_r7_105 = fconvert.t(var_34_2)
    else
        double var_3c_18 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
        long double st0_43 = abs(fconvert.d(fconvert.t(var_c_1)))
        long double temp17_1 = fconvert.t(var_3c_18)
        st0_43 - temp17_1
        eax_9.w = (st0_43 < temp17_1 ? 1 : 0) << 8 | (is_unordered.t(st0_43, temp17_1) ? 1 : 0) << 0xa
            | (st0_43 == temp17_1 ? 1 : 0) << 0xe
        bool p_18 = unimplemented  {test ah, 0x5}
        long double x87_r7_97
        
        if (p_18)
            x87_r7_97 = fconvert.t(var_c_1)
        else
            x87_r7_97 = fconvert.t(arg3)
        
        double var_3c_19 = fconvert.d(abs(fconvert.d(x87_r7_97)))
        long double st0_45 = abs(fconvert.d(fconvert.t(var_14_1)))
        long double temp20_1 = fconvert.t(var_3c_19)
        st0_45 - temp20_1
        eax_9.w = (st0_45 < temp20_1 ? 1 : 0) << 8 | (is_unordered.t(st0_45, temp20_1) ? 1 : 0) << 0xa
            | (st0_45 == temp20_1 ? 1 : 0) << 0xe
        bool p_19 = unimplemented  {test ah, 0x5}
        
        if (p_19)
            x87_r7_105 = fconvert.t(var_14_1)
        else
            double var_3c_20 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
            long double st0_47 = abs(fconvert.d(fconvert.t(var_c_1)))
            long double temp22_1 = fconvert.t(var_3c_20)
            st0_47 - temp22_1
            eax_9.w = (st0_47 < temp22_1 ? 1 : 0) << 8
                | (is_unordered.t(st0_47, temp22_1) ? 1 : 0) << 0xa
                | (st0_47 == temp22_1 ? 1 : 0) << 0xe
            bool p_20 = unimplemented  {test ah, 0x5}
            
            if (p_20)
                x87_r7_105 = fconvert.t(var_c_1)
            else
                x87_r7_105 = fconvert.t(arg3)
    
    if (sub_685f40(sub_5dec60(fconvert.d(abs(fconvert.d(x87_r7_105))))) s<= 1)
        *arg4 = esi_1 * 2
        *arg5 = 2
        return 2
    
    double var_3c_21 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
    long double st0_51 = abs(fconvert.d(fconvert.t(var_c_1)))
    long double temp19 = fconvert.t(var_3c_21)
    st0_51 - temp19
    int32_t eax_10
    eax_10.w = (st0_51 < temp19 ? 1 : 0) << 8 | (is_unordered.t(st0_51, temp19) ? 1 : 0) << 0xa
        | (st0_51 == temp19 ? 1 : 0) << 0xe
    bool p_21 = unimplemented  {test ah, 0x5}
    long double x87_r7_112
    
    if (p_21)
        x87_r7_112 = fconvert.t(var_c_1)
    else
        x87_r7_112 = fconvert.t(arg3)
    
    double var_3c_22 = fconvert.d(abs(fconvert.d(x87_r7_112)))
    long double st0_53 = abs(fconvert.d(fconvert.t(var_14_1)))
    long double temp23 = fconvert.t(var_3c_22)
    st0_53 - temp23
    eax_10.w = (st0_53 < temp23 ? 1 : 0) << 8 | (is_unordered.t(st0_53, temp23) ? 1 : 0) << 0xa
        | (st0_53 == temp23 ? 1 : 0) << 0xe
    bool p_22 = unimplemented  {test ah, 0x5}
    long double x87_r7_120
    
    if (p_22)
        x87_r7_120 = fconvert.t(var_14_1)
    else
        double var_3c_23 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
        long double st0_55 = abs(fconvert.d(fconvert.t(var_c_1)))
        long double temp24_1 = fconvert.t(var_3c_23)
        st0_55 - temp24_1
        eax_10.w = (st0_55 < temp24_1 ? 1 : 0) << 8 | (is_unordered.t(st0_55, temp24_1) ? 1 : 0) << 0xa
            | (st0_55 == temp24_1 ? 1 : 0) << 0xe
        bool p_23 = unimplemented  {test ah, 0x5}
        
        if (p_23)
            x87_r7_120 = fconvert.t(var_c_1)
        else
            x87_r7_120 = fconvert.t(arg3)
    
    double var_3c_24 = fconvert.d(abs(fconvert.d(x87_r7_120)))
    long double st0_57 = abs(fconvert.d(fconvert.t(var_34_2)))
    long double temp25 = fconvert.t(var_3c_24)
    st0_57 - temp25
    eax_10.w = (st0_57 < temp25 ? 1 : 0) << 8 | (is_unordered.t(st0_57, temp25) ? 1 : 0) << 0xa
        | (st0_57 == temp25 ? 1 : 0) << 0xe
    bool p_24 = unimplemented  {test ah, 0x5}
    long double x87_r7_136
    
    if (p_24)
        x87_r7_136 = fconvert.t(var_34_2)
    else
        double var_3c_25 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
        long double st0_59 = abs(fconvert.d(fconvert.t(var_c_1)))
        long double temp26_1 = fconvert.t(var_3c_25)
        st0_59 - temp26_1
        eax_10.w = (st0_59 < temp26_1 ? 1 : 0) << 8 | (is_unordered.t(st0_59, temp26_1) ? 1 : 0) << 0xa
            | (st0_59 == temp26_1 ? 1 : 0) << 0xe
        bool p_25 = unimplemented  {test ah, 0x5}
        long double x87_r7_128
        
        if (p_25)
            x87_r7_128 = fconvert.t(var_c_1)
        else
            x87_r7_128 = fconvert.t(arg3)
        
        double var_3c_26 = fconvert.d(abs(fconvert.d(x87_r7_128)))
        long double st0_61 = abs(fconvert.d(fconvert.t(var_14_1)))
        long double temp27_1 = fconvert.t(var_3c_26)
        st0_61 - temp27_1
        eax_10.w = (st0_61 < temp27_1 ? 1 : 0) << 8 | (is_unordered.t(st0_61, temp27_1) ? 1 : 0) << 0xa
            | (st0_61 == temp27_1 ? 1 : 0) << 0xe
        bool p_26 = unimplemented  {test ah, 0x5}
        
        if (p_26)
            x87_r7_136 = fconvert.t(var_14_1)
        else
            double var_3c_27 = fconvert.d(abs(fconvert.d(fconvert.t(arg3))))
            long double st0_63 = abs(fconvert.d(fconvert.t(var_c_1)))
            long double temp28_1 = fconvert.t(var_3c_27)
            st0_63 - temp28_1
            eax_10.w = (st0_63 < temp28_1 ? 1 : 0) << 8
                | (is_unordered.t(st0_63, temp28_1) ? 1 : 0) << 0xa
                | (st0_63 == temp28_1 ? 1 : 0) << 0xe
            bool p_27 = unimplemented  {test ah, 0x5}
            
            if (p_27)
                x87_r7_136 = fconvert.t(var_c_1)
            else
                x87_r7_136 = fconvert.t(arg3)
    
    int32_t eax_11 = sub_685f40(sub_5dec60(fconvert.d(abs(fconvert.d(x87_r7_136)))))
    *arg4 = esi_1 * 2
    int32_t result = eax_11 * 2
    *arg5 = result
    return result
}
