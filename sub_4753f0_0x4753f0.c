// 函数名称: sub_4753f0
// 虚拟地址: 0x4753f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4753f0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABE?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_164 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    float var_f4 = fconvert.s(fconvert.t(data_8c4d34) * fconvert.t(1000.0))
    long double x87_r7_2 = float.t(0)
    long double x87_r6 = fconvert.t(var_f4)
    x87_r6 - x87_r7_2
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p)
        x87_r7_3 = x87_r7_2 + fconvert.t(0.5)
    else
        x87_r7_3 = x87_r7_2 - fconvert.t(0.5)
    
    int32_t eax_4 = sub_685f40(x87_r7_3)
    data_307ccc8 += eax_4
    float var_18 = fconvert.s(fconvert.t(10000f))
    int32_t var_34
    __builtin_memset(&var_34, 0, 0x20)
    char* ebx
    ebx.b = 1
    char var_e8
    
    if ((*(data_27e7fdc + 0xc) & 1) == 0 || *(data_27e7bbc + 0x18) == 0)
        var_e8 = 0
        ebx.b = 0
    else
        var_e8 = 1
    
    float var_f0 = 0f
    int32_t var_ec = 0
    int32_t eax_6
    int80_t st0
    st0, eax_6 = sub_4c6230(&var_f0)
    sub_4b5ad0(eax_6, &data_307d8cc, ebx.b, &var_f0)
    int32_t edx = sub_4b6050(0, &var_f0, ebx.b, &var_f0)
    ebx.b = var_e8
    sub_4b9420(&var_f0, edx, ebx.b, &var_f0)
    int32_t eax_8 = sub_4b96a0(0, &data_307d978, &var_34, &var_f0, var_e8)
    
    if (eax_8 == 1)
        data_307d978 = 0
        data_307d96c = eax_8.b
    
    void* i_5
    void* ecx_7
    int32_t edx_2
    i_5, ecx_7, edx_2 = sub_407120(&var_f0, &data_307d8b8, var_e8, &var_f0)
    
    if (i_5 == 1)
        data_307d8c8 = 0
        data_307d8b8 = 0
    
    long double x87_r7_5 = float.t(0)
    long double temp0 = fconvert.t(data_307daf8)
    x87_r7_5 - temp0
    i_5.w = (x87_r7_5 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp0) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp0 ? 1 : 0) << 0xe | 0x3800
    bool p_1 = unimplemented  {test ah, 0x5}
    
    if (not(p_1) || data_307daf4 != 0)
        sub_4075c0()
        sub_415e30(i_5, edx_2, var_e8, &var_f0)
        i_5 = sub_407670()
    else
        long double temp1_1 = fconvert.t(data_307db0c)
        x87_r7_5 - temp1_1
        i_5.w = (x87_r7_5 < temp1_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp1_1 ? 1 : 0) << 0xe | 0x3800
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2) || data_307db08 != 0)
            sub_4075c0()
            ecx_7.b = var_e8
            sub_40b8a0(&var_f0, edx_2, ecx_7.b, &var_f0)
            i_5 = sub_407670()
        else
            long double x87_r6_1 = fconvert.t(data_307cd1c)
            x87_r6_1 - x87_r7_5
            i_5.w = (x87_r6_1 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
            
            if ((i_5:1.b & 0x41) != 0)
                x87_r6_1 - x87_r7_5
                i_5.w = (x87_r6_1 < x87_r7_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_5) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_5 ? 1 : 0) << 0xe
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (not(p_3))
                    i_5, ecx_7 = sub_415ac0(i_5, edx_2, var_e8, &var_f0)
                    
                    if (i_5 == 0x19)
                        i_5 = nullptr
                        data_307cd08 = 0
                        data_307d9c0 = 0
                    else if (i_5 == 0x16)
                        data_307d088 = 0
                        data_307cd0c = 1
                        data_307d080 = 1
                        data_307d084 = 0
                        data_307d06d = 1
                        data_307d051 = 0
                        char* i = &data_307cdce
                        
                        do
                            *i = 0
                            i = &i[0x1c]
                        while (i s< &data_307d088:2)
                        
                        void* eax_10 = sub_40c7a0(&data_307cd0c)
                        *(eax_10 + 0x50) = 1
                        *(eax_10 + 0x5c) = 1
                        data_307cdce = 1
                        data_307cdea = 1
                        i_5, ecx_7 = sub_40c8b0(eax_10)
                        data_307d9c0 = 0
                    else if (i_5 == 0x18)
                        data_307cd0c = 0
                        data_307d080 = 4
                        data_307d084 = 0
                        data_307d088 = 0
                        data_307d06d = 1
                        data_307d051 = 0
                        char* i_1 = &data_307cdce
                        
                        do
                            *i_1 = 0
                            i_1 = &i_1[0x1c]
                        while (i_1 s< &data_307d088:2)
                        
                        i_5, ecx_7 = sub_40c7a0(&data_307cd0c)
                        data_307cd38 = 1
                        data_307cd3c = 1
                        data_307cd0c = 0
                        data_307cd4c = 0
                        data_307d9c0 = 0
                    else if (i_5 == 0x1a)
                        data_307d084 = 0
                        data_307cd0c = 0
                        data_307d080 = 5
                        data_307d088 = 0
                        data_307d06d = 1
                        data_307d051 = 0
                        char* i_2 = &data_307cdce
                        
                        do
                            *i_2 = 0
                            i_2 = &i_2[0x1c]
                        while (i_2 s< &data_307d088:2)
                        
                        i_5, ecx_7 = sub_40c7a0(&data_307cd0c)
                        data_307cd14 = 1
                        data_307cd18 = 0
                        data_307cd0c = 0
                    else if (i_5 == 0x17)
                        data_307d088 = 0
                        data_307cd0c = 1
                        data_307d080 = 2
                        data_307d084 = 0
                        data_307d06d = 1
                        data_307d051 = 0
                        char* i_3 = &data_307cdce
                        
                        do
                            *i_3 = 0
                            i_3 = &i_3[0x1c]
                        while (i_3 s< &data_307d088:2)
                        
                        void* eax_11 = sub_40c7a0(&data_307cd0c)
                        *(eax_11 + 0x50) = 1
                        data_307cdce = 1
                        i_5, ecx_7 = sub_40c8b0(eax_11)
                        data_307d9c0 = 0
                    else if (i_5 - 0x6a u<= 0x24)
                        data_307d088 = 2
                        data_307cd0c = 1
                        data_307d080 = 3
                        data_307d084 = i_5 - 0x6a
                        data_307d06d = 1
                        data_307d051 = 0
                        char* i_4 = &data_307cdce
                        
                        do
                            *i_4 = 0
                            i_4 = &i_4[0x1c]
                        while (i_4 s< &data_307d088:2)
                        
                        sub_40c7a0(&data_307cd0c)
                        ecx_7 = nullptr
                        i_5 = &data_307cdce
                        
                        do
                            if (ecx_7 s< 0x10 || ecx_7 s> 0x16)
                                *i_5 = 1
                            
                            i_5 += 0x1c
                            ecx_7 += 1
                        while (i_5 s< &data_307d088:2)
                        
                        data_307d9c0 = 0
                    else if (i_5 - 0xb4 u<= 0x24)
                        data_307d080 = 3
                        data_307d088 = 3
                        data_307cd0c = 1
                        data_307d084 = i_5 - 0xb4
                        data_307d06d = 1
                        data_307d051 = 0
                        char* i_6 = &data_307cdce
                        
                        do
                            *i_6 = 0
                            i_6 = &i_6[0x1c]
                        while (i_6 s< &data_307d088:2)
                        
                        sub_40c7a0(&data_307cd0c)
                        ecx_7 = nullptr
                        i_5 = &data_307cdce
                        
                        do
                            if (ecx_7 s< 0x10 || ecx_7 s> 0x16)
                                *i_5 = 1
                            
                            i_5 += 0x1c
                            ecx_7 += 1
                        while (i_5 s< &data_307d088:2)
                        
                        data_307d9c0 = 0
                    else if (i_5 - 0x8f u<= 0x24)
                        sub_4075c0()
                        sub_416690(i_5 - 0x8f, 1)
                        i_5 = sub_407670()
                    else if (i_5 - 0x20 u<= 0x24)
                        void* var_f8 = i_5 - 0x20
                        var_f4 = 2.80259693e-45f
                        sub_4075c0()
                        void* edi_2 = data_27e7a40
                        int32_t esi_4 = (i_5 - 0x20) * 0x1f8
                        uint32_t eax_12 = *(esi_4 + edi_2 + 0xcb4)
                        int32_t var_16c_1
                        void* var_168_6
                        int32_t ecx_13
                        void* edx_3
                        
                        if (eax_12 != 3)
                            if (eax_12 == 4 || eax_12 == 6)
                                edx_3 = esi_4 + edi_2 + 0xcac
                                var_168_6 = edx_3
                                var_16c_1 = 0xf4262
                                ecx_13 = *(edi_2 + 0x28)
                                goto label_4759c3
                            
                            char eax_13
                            eax_13, ecx_7, edx_3 = sub_413990(esi_4 + edi_2 + 0xad8)
                            
                            if (eax_13 != 0)
                                eax_12 = esi_4 + edi_2 + 0xcac
                                var_168_6 = eax_12
                                var_16c_1 = 0xf4264
                                ecx_13 = *(edi_2 + 0x28)
                                goto label_4759c3
                            
                            data_307db18 = 1
                            data_307db08 = 1
                            data_307db14 = i_5 - 0x20
                            i_5 = sub_407670()
                        else
                            sub_475310(i_5 - 0x20)
                            eax_12 = data_27e7a40
                            ecx_13 = *(eax_12 + 0x28)
                            edx_3 = esi_4 + eax_12 + 0xcac
                            var_168_6 = edx_3
                            var_16c_1 = 0xf4265
                        label_4759c3:
                            sub_4c75d0(eax_12, edx_3, ecx_13, 4, var_16c_1, var_168_6)
                            sub_405420(&var_f8)
                            i_5 = sub_407670()
                    else if (i_5 - 0x45 u<= 0x24)
                        sub_4075c0()
                        uint32_t eax_15 = data_27e7a40
                        var_f4 = *((i_5 - 0x45) * 0x1f8 + eax_15 + 0xcac)
                        sub_4c75d0(eax_15, &var_f4, *(eax_15 + 0x28), 4, 0xf425e, &var_f4)
                        data_27c05f4 = 3
                        i_5 = sub_407670()
    
    ecx_7.b = var_e8
    int32_t eax_17 = sub_417640(i_5, &var_f0, ecx_7.b, &var_f0)
    
    if (eax_17 == 0)
        int32_t eax_18 = var_e8.d
        eax_17 = sub_417700(eax_18, &data_307d594, &var_34, &var_f0, eax_18.b)
    
    int32_t eax_19
    int32_t ecx_19
    eax_19, ecx_19 = sub_40bd80(eax_17, &var_f0, var_e8, &var_f0)
    
    if (eax_19 == 1)
        sub_475260()
    
    if (data_307db1c != 0 && data_307d9c0 != 0)
        data_307cd08 = 0
        data_307d9c0 = 0
    
    if (data_307d978 == 0)
        ecx_19.b = var_e8
        int32_t eax_21
        eax_21, ecx_19 = std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> > >::_Getmfld(
            &var_f0, &var_34, ecx_19.b, &data_307cd0c, &var_f0)
        
        if (eax_21 == 1)
            if (data_307d080 != 0)
                data_307d9c0 = 1
            
            data_307cd0c = 0
        else if (eax_21 == 5)
            int32_t var_e4
            __builtin_memset(&var_e4, 0, 0x20)
            int128_t var_c4[0x2]
            sub_5abfc0(&var_c4, 0, 0x70)
            int32_t var_a4_1 = 2
            int32_t var_a0_1 = 1
            int32_t var_94 = 1
            int32_t var_88_1 = 2
            int32_t var_84_1 = 0
            int32_t var_7c_1 = 0
            int32_t var_70_1 = 0
            char var_60_1 = 1
            int16_t var_5d_1 = 0x100
            int32_t var_98_1 = 0
            sub_474f30(0, &var_e4)
        else if (eax_21 - 0x2c u<= 0x10)
            data_307d978 = 1
            data_307d9b8 = eax_21 - 0x2c
            data_307d9bc = 1
            
            if (eax_21 == 0x30)
                void* eax_22 = data_27e7a54
                
                if (*(eax_22 + 0x210) == 0)
                    *(eax_22 + 0x210) = 1
                    sub_408a40()
        else if (eax_21 == 2)
            void* eax_23 = data_27e7a54
            *(eax_23 + 0xdc) = 1
            sub_474f30(0, eax_23 + 0x54)
            data_307cd10 = fconvert.s(float.t(0))
            data_307cd0c = 0
        else
            uint32_t eax_25
            void* edx_9
            
            if (eax_21 == 3)
                eax_25 = data_27e7a54
                *(eax_25 + 0x16c) = 1
                data_307cd0c = 0
                data_307d9c0 = 1
                sub_4075c0()
                edx_9 = data_27e7a54 + 0xe4
                sub_4c75d0(eax_25, edx_9, *(data_27e7a40 + 0x28), 0x90, 0xf425c, edx_9)
                sub_407670()
            else if (eax_21 == 4)
                void* eax_26 = data_27e7a54
                *(eax_26 + 0x1fc) = 1
                data_307cd0c = 0
                data_307d9c0 = 1
                *(eax_26 + 0x1bc) = 1
                sub_4075c0()
                eax_25 = data_27e7a40
                edx_9 = data_27e7a54 + 0x174
                sub_4c75d0(eax_25, edx_9, *(eax_25 + 0x28), 0x90, 0xf425d, edx_9)
                sub_407670()
    
    ecx_19.b = var_e8
    int32_t eax_28 = sub_4bcd30(&var_f0, &var_34, ecx_19.b, &data_307d094, &var_f0)
    
    if (eax_28 == 1)
        data_307d094 = 0
        
        if (data_307d57c == 1)
            data_307d9c0 = 1
            sub_4075c0()
            
            if (*(data_27e7a40 + 0x20) == 2)
                sub_4023f0(1)
            
            sub_407670()
    else if (eax_28 == 2)
        data_307d094 = 0
    
    long double x87_r7_7 = float.t(0)
    long double temp2 = fconvert.t(data_307d598)
    x87_r7_7 - temp2
    eax_28.w = (x87_r7_7 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_7, temp2) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp2 ? 1 : 0) << 0xe | 0x3800
    bool p_4 = unimplemented  {test ah, 0x5}
    
    if (not(p_4))
        var_f4.b = 1
    else
        long double temp3_1 = fconvert.t(data_307d098)
        x87_r7_7 - temp3_1
        eax_28.w = (x87_r7_7 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_7, temp3_1) ? 1 : 0) << 0xa | (x87_r7_7 == temp3_1 ? 1 : 0) << 0xe
            | 0x3800
        bool p_5 = unimplemented  {test ah, 0x5}
        
        if (not(p_5) || data_307d590 != 0)
            var_f4.b = 1
        else
            long double temp4_1 = fconvert.t(data_307d0a0)
            x87_r7_7 - temp4_1
            eax_28.w = (x87_r7_7 < temp4_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_7, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp4_1 ? 1 : 0) << 0xe | 0x3800
            bool p_6 = unimplemented  {test ah, 0x5}
            
            if (not(p_6))
                var_f4.b = 1
            else
                long double temp5_1 = fconvert.t(data_307d0a8)
                x87_r7_7 - temp5_1
                eax_28.w = (x87_r7_7 < temp5_1 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_7, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == temp5_1 ? 1 : 0) << 0xe | 0x3800
                bool p_7 = unimplemented  {test ah, 0x5}
                
                if (not(p_7))
                    var_f4.b = 1
                else
                    long double temp6_1 = fconvert.t(data_307d8bc)
                    x87_r7_7 - temp6_1
                    eax_28.w = (x87_r7_7 < temp6_1 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r7_7, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_7 == temp6_1 ? 1 : 0) << 0xe | 0x3800
                    bool p_8 = unimplemented  {test ah, 0x5}
                    
                    if (not(p_8))
                        var_f4.b = 1
                    else
                        long double temp7_1 = fconvert.t(data_307d8d8)
                        x87_r7_7 - temp7_1
                        eax_28.w = (x87_r7_7 < temp7_1 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r7_7, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r7_7 == temp7_1 ? 1 : 0) << 0xe | 0x3800
                        bool p_9 = unimplemented  {test ah, 0x5}
                        
                        if (not(p_9))
                            var_f4.b = 1
                        else
                            long double temp8_1 = fconvert.t(data_307d8d0)
                            x87_r7_7 - temp8_1
                            eax_28.w = (x87_r7_7 < temp8_1 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r7_7, temp8_1) ? 1 : 0) << 0xa
                                | (x87_r7_7 == temp8_1 ? 1 : 0) << 0xe | 0x3800
                            bool p_10 = unimplemented  {test ah, 0x5}
                            
                            if (not(p_10))
                                var_f4.b = 1
                            else
                                long double temp9_1 = fconvert.t(data_307cd10)
                                x87_r7_7 - temp9_1
                                eax_28.w = (x87_r7_7 < temp9_1 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r7_7, temp9_1) ? 1 : 0) << 0xa
                                    | (x87_r7_7 == temp9_1 ? 1 : 0) << 0xe | 0x3800
                                bool p_11 = unimplemented  {test ah, 0x5}
                                
                                if (not(p_11))
                                    var_f4.b = 1
                                else
                                    long double temp10_1 = fconvert.t(data_307cd40)
                                    x87_r7_7 - temp10_1
                                    eax_28.w = (x87_r7_7 < temp10_1 ? 1 : 0) << 8
                                        | (is_unordered.t(x87_r7_7, temp10_1) ? 1 : 0) << 0xa
                                        | (x87_r7_7 == temp10_1 ? 1 : 0) << 0xe | 0x3800
                                    bool p_12 = unimplemented  {test ah, 0x5}
                                    
                                    if (not(p_12))
                                        var_f4.b = 1
                                    else
                                        long double temp11_1 = fconvert.t(data_307cd54)
                                        x87_r7_7 - temp11_1
                                        eax_28.w = (x87_r7_7 < temp11_1 ? 1 : 0) << 8
                                            | (is_unordered.t(x87_r7_7, temp11_1) ? 1 : 0) << 0xa
                                            | (x87_r7_7 == temp11_1 ? 1 : 0) << 0xe | 0x3800
                                        bool p_13 = unimplemented  {test ah, 0x5}
                                        
                                        if (not(p_13))
                                            var_f4.b = 1
                                        else
                                            long double temp12_1 = fconvert.t(data_307d97c)
                                            x87_r7_7 - temp12_1
                                            eax_28.w = (x87_r7_7 < temp12_1 ? 1 : 0) << 8
                                                | (is_unordered.t(x87_r7_7, temp12_1) ? 1 : 0) << 0xa
                                                | (x87_r7_7 == temp12_1 ? 1 : 0) << 0xe | 0x3800
                                            bool p_14 = unimplemented  {test ah, 0x5}
                                            
                                            if (not(p_14))
                                                var_f4.b = 1
                                            else
                                                long double temp13_1 = fconvert.t(data_307d970)
                                                x87_r7_7 - temp13_1
                                                eax_28.w = (x87_r7_7 < temp13_1 ? 1 : 0) << 8
                                                    | (is_unordered.t(x87_r7_7, temp13_1) ? 1 : 0)
                                                    << 0xa | (x87_r7_7 == temp13_1 ? 1 : 0) << 0xe | 0x3800
                                                bool p_15 = unimplemented  {test ah, 0x5}
                                                
                                                if (not(p_15))
                                                    var_f4.b = 1
                                                else
                                                    long double temp14_1 = fconvert.t(data_307daf8)
                                                    x87_r7_7 - temp14_1
                                                    eax_28.w = (x87_r7_7 < temp14_1 ? 1 : 0) << 8
                                                        | (is_unordered.t(x87_r7_7, temp14_1) ? 1 : 0)
                                                        << 0xa | (x87_r7_7 == temp14_1 ? 1 : 0) << 0xe
                                                        | 0x3800
                                                    bool p_16 = unimplemented  {test ah, 0x5}
                                                    
                                                    if (not(p_16))
                                                        var_f4.b = 1
                                                    else
                                                        long double temp15_1 = fconvert.t(data_307db0c)
                                                        x87_r7_7 - temp15_1
                                                        eax_28.w = (x87_r7_7 < temp15_1 ? 1 : 0) << 8
                                                            | (is_unordered.t(x87_r7_7, temp15_1) ? 1
                                                            : 0) << 0xa
                                                            | (x87_r7_7 == temp15_1 ? 1 : 0) << 0xe
                                                            | 0x3800
                                                        bool p_17 = unimplemented  {test ah, 0x5}
                                                        
                                                        if (not(p_17))
                                                            var_f4.b = 1
                                                        else
                                                            long double temp16_1 =
                                                                fconvert.t(data_307db20)
                                                            x87_r7_7 - temp16_1
                                                            eax_28.w =
                                                                (x87_r7_7 < temp16_1 ? 1 : 0) << 8 | (
                                                                is_unordered.t(x87_r7_7, temp16_1) ? 1
                                                                : 0) << 0xa
                                                                | (x87_r7_7 == temp16_1 ? 1 : 0) << 0xe
                                                                | 0x3800
                                                            bool p_18 = unimplemented  {test ah, 0x5}
                                                            
                                                            if (not(p_18))
                                                                var_f4.b = 1
                                                            else
                                                                long double temp17_1 =
                                                                    fconvert.t(data_307d9c4)
                                                                x87_r7_7 - temp17_1
                                                                eax_28.w =
                                                                    (x87_r7_7 < temp17_1 ? 1 : 0) << 8 | (
                                                                    is_unordered.t(x87_r7_7, temp17_1) ? 1
                                                                    : 0) << 0xa
                                                                    | (x87_r7_7 == temp17_1 ? 1 : 0) << 0xe
                                                                bool p_19 =
                                                                    unimplemented  {test ah, 0x5}
                                                                
                                                                if (not(p_19))
                                                                    var_f4.b = 1
                                                                else
                                                                    var_f4.b = 0
    
    sub_4fa2c0(data_307cccc, var_f4.b)
    
    if ((data_3166a30 & 1) == 0)
        data_3166a30.d |= 1
        int32_t var_8_1 = 0
        data_3166a2c = sub_4f5220(data_307c76c, "BtnResume")
        int32_t var_8_2 = 0xffffffff
    
    if ((data_3166a30 & 2) == 0)
        data_3166a30.d |= 2
        int32_t var_8_3 = 1
        data_3166a28 = sub_4f5220(data_307c76c, "BtnPlayOnline")
        int32_t var_8_4 = 0xffffffff
    
    *(sub_4f6e90(data_3166a2c, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3) + 0x21) =
        data_27c060c == 0
    sub_4075c0()
    void* eax_34 = data_27e7a40
    bool ebx_8
    
    if (*(eax_34 + 0x20) != 2 || *(eax_34 + 0x24) != 8)
        ebx_8 = false
    else
        ebx_8 = true
    
    sub_407670()
    *(sub_4f6e90(data_3166a28, sub_4fc3d0(&data_be1cb8, data_307cccc), &data_83f3d3) + 0x23) =
        ebx_8 == 0
    void var_154
    int32_t eax_37
    int80_t result
    result, eax_37 = sub_40a930(&var_154)
    long double x87_r6_2 = fconvert.t(data_8c4d34)
    void var_54
    int32_t ecx_23
    int32_t esi_12
    esi_12, ecx_23 = __builtin_memcpy(&var_54, eax_37, 0x40)
    int32_t var_174 = ecx_23
    void var_114
    sub_4f8710(esi_12, &var_114, data_307cccc, &var_54, &var_f0, var_e8, fconvert.s(x87_r6_2), nullptr, 
        nullptr, nullptr)
    int32_t eax_38 = sub_475040()
    
    if (eax_38 == 0)
        eax_38 = 1
    
    sub_4c6110(eax_38)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
