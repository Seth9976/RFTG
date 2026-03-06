// 函数名称: sub_448bc0
// 虚拟地址: 0x448bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_448bc0(int32_t* arg1, char arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_696a8f
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_79c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* ebx = *(data_27e7a40 + 0x548)
    int32_t* var_610 = ebx
    float var_5dc
    sub_4c6230(&var_5dc)
    char var_5e0_1
    
    if ((*(data_27e7fdc + 0xc) & 1) != 0)
        var_5e0_1 = 1
    
    if ((*(data_27e7fdc + 0xc) & 1) == 0 || *(data_27e7bbc + 0x18) == 0)
        var_5e0_1 = 0
    
    void* eax_5
    eax_5.b = *(*(data_27e7a40 + 0x548) + 0x43880) s> 0
    int32_t var_5d4
    void var_5b4
    void var_574
    int16_t top
    
    if (eax_5.b == 0)
        int32_t var_5d0_1 = 0
        int32_t var_5cc_1 = 0
        int32_t var_5c8_1 = 0
        int32_t var_5c4_1 = 0
        int32_t eax_6
        int80_t st0_1
        st0_1, eax_6 = sub_40a930(&var_5b4)
        int32_t ecx_2
        int32_t esi_2
        esi_2, ecx_2 = __builtin_memcpy(&var_574, eax_6, 0x40)
        int32_t var_7ac_1 = ecx_2
        top = 0xffff
        sub_4f8710(esi_2, &var_5d4, ebx[0x2f], &var_574, &var_5dc, var_5e0_1, 
            fconvert.s(fconvert.t(data_8c4d34)), nullptr, nullptr, nullptr)
    
    void* eax_9
    eax_9.b = *(*(data_27e7a40 + 0x548) + 0x43880) s> 0
    
    if (eax_9.b != 0)
        if (var_5e0_1 != 0)
            ebx[0x10e20] = 0
        
        int32_t var_5d0_2 = 0
        int32_t var_5cc_2 = 0
        int32_t var_5c8_2 = 0
        int32_t var_5c4_2 = 0
        int32_t eax_10 = sub_40a930(&var_5b4)
        unimplemented  {call 0x40a930}
        int32_t ecx_4
        int32_t esi_4
        esi_4, ecx_4 = __builtin_memcpy(&var_574, eax_10, 0x40)
        unimplemented  {fld st0, dword [0x8c4d34]}
        int32_t var_7ac_3 = ecx_4
        float var_7ac_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        sub_4f8710(esi_4, &var_5d4, ebx[0x2f], &var_574, &var_5dc, var_5e0_1, var_7ac_4, nullptr, 
            nullptr, nullptr)
        unimplemented  {fld st0, dword [0x8a594c]}
        float var_600_1 = fconvert.s(unimplemented  {fst dword [ebp-0x5fc], st0})
        float var_5fc_1 = fconvert.s(unimplemented  {fstp dword [ebp-0x5f8], st0})
        unimplemented  {fstp dword [ebp-0x5f8], st0}
        top -= 1
        var_5dc = var_600_1
        float var_5d8_1 = var_5fc_1
    
    void var_60c
    char* i_5
    char* var_5e4
    
    if (arg2 != 1)
        int32_t eax_60 = sub_40a930(&var_5b4)
        int16_t top_4 = top - 1
        unimplemented  {call 0x40a930}
        __builtin_memcpy(&var_574, eax_60, 0x40)
        void var_78c
        int32_t var_604
        
        if (sub_459b60() != 0)
            unimplemented  {fld1 }
            long double temp0_1 = fconvert.t(ebx[0x2ff3])
            unimplemented  {fcomp st0, dword [ebx+0xbfcc]} f- temp0_1
            bool c0_1 = unimplemented  {fcomp st0, dword [ebx+0xbfcc]} f< temp0_1
            bool c2_1 = is_unordered.t(unimplemented  {fcomp st0, dword [ebx+0xbfcc]}, temp0_1)
            bool c3_1 = unimplemented  {fcomp st0, dword [ebx+0xbfcc]} f== temp0_1
            unimplemented  {fcomp st0, dword [ebx+0xbfcc]}
            int32_t eax_61
            eax_61.w =
                (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top_4 & 7) << 0xb
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (not(p_1))
                int32_t eax_62 = sub_40a930(&var_78c)
                top_4 -= 1
                unimplemented  {call 0x40a930}
                int32_t eax_63 = ebx[0x31]
                __builtin_memcpy(&var_5b4, eax_62, 0x40)
                char eax_64 = sub_4f6200(eax_63, &var_5dc, &var_5b4, ebx[0x30], eax_63, &var_5dc)
                int32_t* ecx_25
                ecx_25.b = var_5e0_1
                char* edx_17
                edx_17.b = eax_64
                
                if (sub_505640(ebx[0x31], edx_17.b, ecx_25.b, &ebx[0x34], ebx[0x30], &ebx[0x32]) == 1)
                    void* ecx_26 = *(data_27e7a40 + 0x548)
                    int32_t esi_30 = ebx[0x2feb]
                    var_604 = 0
                    int32_t var_600_2 = 0
                    int32_t var_5fc_3 = 0
                    var_604 = 3
                    int32_t var_600_3 = esi_30
                    int32_t edx_19 = sub_445e20(sub_463f60(ecx_26 + 0x43960, esi_30))
                    void* eax_68 = data_27e7a40
                    sub_472e60(*(eax_68 + 0x74), edx_19, &var_604, *(eax_68 + 0x548))
                    sub_447b40()
                
                if (eax_64 != 0)
                    *arg1 = 0xc
        
        int32_t esi_31 = ebx[0x2feb]
        void* ecx_30 = *(data_27e7a40 + 0x548)
        char* eax_70
        
        if (esi_31 == 0)
            var_5e4 = nullptr
            eax_70.b = 0
        else
            eax_70 = zx.d(esi_31.w)
            
            if (eax_70 u>= *(ecx_30 + 0x43964))
                var_5e4 = nullptr
                eax_70.b = 0
            else
                eax_70 = eax_70 * 0xb0 + *(ecx_30 + 0x43960)
                
                if (*(eax_70 + 0xac) != esi_31)
                    var_5e4 = nullptr
                    eax_70.b = 0
                else
                    var_5e4 = eax_70
                    
                    if (sub_448b40(ecx_30, eax_70).b == 0)
                        eax_70.b = 0
                    else
                        eax_70.b = 1
        
        i_5 = nullptr
        void* var_5f0_1 = &ebx[0x3b]
        float var_608
        void* i
        
        do
            int32_t eax_72 = sub_40a930(&var_78c)
            top_4 -= 1
            unimplemented  {call 0x40a930}
            void* edx_22 = data_27e7bbc
            __builtin_memcpy(&var_5b4, eax_72, 0x40)
            int32_t eax_73
            
            if (*(edx_22 + 0x18) != 0)
                int32_t* eax_74 =
                    sub_4f5350(*(var_5f0_1 - 0xc), &var_5b4, *(var_5f0_1 - 0x10), &var_5b4)
                int32_t edx_24 = eax_74[1]
                var_608 = *eax_74
                int32_t ecx_35 = eax_74[2]
                var_604 = edx_24
                int32_t var_600_4 = ecx_35
                int32_t var_5fc_4 = eax_74[3]
                eax_73 = sub_4057a0(&var_608, &var_5dc)
                ebx = var_610
            else
                eax_73.b = 0
            
            *(var_5f0_1 - 7) = eax_70.b == 0
            int32_t* ecx_38
            ecx_38.b = var_5e0_1
            char* edx_27
            edx_27.b = eax_73.b
            
            if (sub_505640(*(var_5f0_1 - 0xc), edx_27.b, ecx_38.b, var_5f0_1, *(var_5f0_1 - 0x10), 
                    var_5f0_1 - 8) == 1)
                void* eax_77 = sub_46b2b0(*(data_27e7a40 + 0x74))
                *(eax_77 + 0x1f84) = &i_5[1]
            
            if (*(var_5f0_1 + 1) != 0)
                *arg1 = 0xd
            
            i = &i_5[1]
            i_5 = i
            var_5f0_1 += 0x1c
        while (i s< 5)
        char* eax_79 = var_5e4
        char var_5b5_5
        char eax_80
        
        if (eax_79 != 0)
            eax_80 = sub_448aa0(eax_79)
            var_5b5_5 = 1
        
        if (eax_79 == 0 || eax_80 == 0)
            var_5b5_5 = 0
        
        int32_t eax_81 = sub_40a930(&var_78c)
        unimplemented  {call 0x40a930}
        int32_t eax_82 = ebx[0x5b]
        bool cond:6_1 = *(data_27e7bbc + 0x18) != 0
        __builtin_memcpy(&var_5b4, eax_81, 0x40)
        
        if (cond:6_1)
            int32_t* eax_83 = sub_4f5350(eax_82, &var_5b4, ebx[0x5a], &var_5b4)
            int32_t edx_32 = eax_83[1]
            var_608 = *eax_83
            int32_t ecx_42 = eax_83[2]
            var_604 = edx_32
            int32_t var_600_5 = ecx_42
            int32_t var_5fc_5 = eax_83[3]
            eax_82 = sub_4057a0(&var_608, &var_5dc)
            ebx = var_610
        else
            eax_82.b = 0
        
        float* ecx_43
        ecx_43.b = var_5b5_5 == 0
        *(ebx + 0x171) = ecx_43.b
        int32_t* ecx_44
        ecx_44.b = var_5e0_1
        char* edx_35
        edx_35.b = eax_82.b
        int32_t* eax_85
        
        if (sub_505640(ebx[0x5b], edx_35.b, ecx_44.b, &ebx[0x5e], ebx[0x5a], &ebx[0x5c]) == 1)
            void* edi_22 = data_27e7a40
            void* eax_86 = *(edi_22 + 0x548)
            
            if (eax_86 == 0)
                sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                    "GetGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_36 = *(eax_86 + 0x45844)
            int32_t i_1 = sx.d(*(*(edi_22 + 0x74) * 0xb4 + edx_36 + 0x4a))
            int32_t ecx_45 = 0
            int32_t var_534[0x148]
            
            while (i_1 != 0xffffffff)
                var_534[ecx_45] = i_1
                i_1 = sx.d(*(edx_36 + ((i_1 * 5 + 0x11d) << 2)))
                ecx_45 += 1
            
            eax_85 = nullptr
            ebx[0x10e20] = 0
            
            if (ecx_45 s> 0)
                do
                    void* edx_37 = *(edi_22 + 0x548)
                    
                    if (edx_37 == 0)
                        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 
                            0xcc, "GetGame")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    ebx[ebx[0x10e20] + 0x10cd8] =
                        sx.d(*(*(*(edx_37 + 0x45844) + var_534[eax_85] * 0x14 + 0x46c) + 4))
                    ebx[0x10e20] += 1
                    eax_85 += 1
                while (eax_85 s< ecx_45)
        
        if (*(ebx + 0x179) != 0)
            *arg1 = 0xd
        
        unimplemented  {fldz }
        long double temp1_1 = fconvert.t(ebx[0x2ff3])
        unimplemented  {fcomp st0, dword [ebx+0xbfcc]} f- temp1_1
        bool c0_2 = unimplemented  {fcomp st0, dword [ebx+0xbfcc]} f< temp1_1
        bool c2_2 = is_unordered.t(unimplemented  {fcomp st0, dword [ebx+0xbfcc]}, temp1_1)
        bool c3_2 = unimplemented  {fcomp st0, dword [ebx+0xbfcc]} f== temp1_1
        unimplemented  {fcomp st0, dword [ebx+0xbfcc]}
        eax_85.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
            | ((top_4 - 1) & 7) << 0xb
        bool p_2 = unimplemented  {test ah, 0x5}
        
        if (not(p_2))
            var_5dc = 0f
            int32_t var_5d8_3 = 0
            var_5e0_1 = 0
        
        int32_t esi_37 = var_5e0_1.d
        int32_t ecx_46 = 0
        int32_t var_5d0_6 = 0
        int32_t var_5cc_6 = 0
        int32_t var_5c8_6 = 0
        int32_t var_5c4_6 = 0
        void* edi_23 = &ebx[5]
        int32_t i_7 = 0xc
        int32_t i_2
        
        do
            if (ecx_46 == 0 || ecx_46 == 1)
                unimplemented  {fld st0, dword [0x8c4d34]}
                int32_t var_7ac_17 = ecx_46
                float var_7ac_18 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                void var_704
                int32_t* eax_92 = sub_4f8710(esi_37, &var_704, *edi_23, &var_574, &var_5dc, esi_37.b, 
                    var_7ac_18, nullptr, nullptr, nullptr)
                ecx_46 = *eax_92
                int32_t var_5d0_7 = eax_92[1]
                int32_t var_5cc_7 = eax_92[2]
                int32_t var_5c8_7 = eax_92[3]
                int32_t var_5c4_7 = eax_92[4]
            
            edi_23 += 4
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
        void* edi_24 = &ebx[0x19]
        int32_t i_8 = 0x13
        int32_t i_3
        
        do
            if (ecx_46 == 0 || ecx_46 == 1)
                unimplemented  {fld st0, dword [0x8c4d34]}
                int32_t var_7ac_19 = ecx_46
                float var_7ac_20 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                void var_6d4
                int32_t* eax_95 = sub_4f8710(esi_37, &var_6d4, *edi_24, &var_574, &var_5dc, esi_37.b, 
                    var_7ac_20, nullptr, nullptr, nullptr)
                ecx_46 = *eax_95
                int32_t var_5d0_8 = eax_95[1]
                int32_t var_5cc_8 = eax_95[2]
                int32_t var_5c8_8 = eax_95[3]
                int32_t var_5c4_8 = eax_95[4]
            
            edi_24 += 4
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)
        
        if (ecx_46 == 0 || ecx_46 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_21 = ecx_46
            float var_7ac_22 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_62c
            int32_t* eax_98 = sub_4f8710(esi_37, &var_62c, ebx[0x15], &var_574, &var_5dc, esi_37.b, 
                var_7ac_22, nullptr, nullptr, nullptr)
            ecx_46 = *eax_98
            int32_t var_5d0_9 = eax_98[1]
            int32_t var_5cc_9 = eax_98[2]
            int32_t var_5c8_9 = eax_98[3]
            int32_t var_5c4_9 = eax_98[4]
        
        if (ecx_46 == 0 || ecx_46 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_23 = ecx_46
            float var_7ac_24 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_734
            int32_t* eax_101 = sub_4f8710(esi_37, &var_734, ebx[0x2d], &var_574, &var_5dc, esi_37.b, 
                var_7ac_24, nullptr, nullptr, nullptr)
            ecx_46 = *eax_101
            int32_t var_5d0_10 = eax_101[1]
            int32_t var_5cc_10 = eax_101[2]
            int32_t var_5c8_10 = eax_101[3]
            int32_t var_5c4_10 = eax_101[4]
        
        if (ecx_46 == 0 || ecx_46 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_25 = ecx_46
            float var_7ac_26 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_65c
            int32_t* eax_104 = sub_4f8710(esi_37, &var_65c, ebx[0x2e], &var_574, &var_5dc, esi_37.b, 
                var_7ac_26, nullptr, nullptr, nullptr)
            ecx_46 = *eax_104
            int32_t var_5d0_11 = eax_104[1]
            int32_t var_5cc_11 = eax_104[2]
            int32_t var_5c8_11 = eax_104[3]
            int32_t var_5c4_11 = eax_104[4]
        
        if (ecx_46 == 0 || ecx_46 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_27 = ecx_46
            float var_7ac_28 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_6ec
            int32_t* eax_107 = sub_4f8710(esi_37, &var_6ec, ebx[2], &var_574, &var_5dc, esi_37.b, 
                var_7ac_28, nullptr, nullptr, nullptr)
            ecx_46 = *eax_107
            int32_t var_5d0_12 = eax_107[1]
            int32_t var_5cc_12 = eax_107[2]
            int32_t var_5c8_12 = eax_107[3]
            int32_t var_5c4_12 = eax_107[4]
        
        if (ecx_46 == 0 || ecx_46 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_29 = ecx_46
            float var_7ac_30 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_68c
            int32_t* eax_110 = sub_4f8710(esi_37, &var_68c, ebx[1], &var_574, &var_5dc, esi_37.b, 
                var_7ac_30, nullptr, nullptr, nullptr)
            ecx_46 = *eax_110
            int32_t var_5d0_13 = eax_110[1]
            int32_t var_5cc_13 = eax_110[2]
            int32_t var_5c8_13 = eax_110[3]
            int32_t var_5c4_13 = eax_110[4]
        
        if (ecx_46 == 0 || ecx_46 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_31 = ecx_46
            float var_7ac_32 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_74c
            int32_t* eax_113 = sub_4f8710(esi_37, &var_74c, ebx[4], &var_574, &var_5dc, esi_37.b, 
                var_7ac_32, nullptr, nullptr, nullptr)
            ecx_46 = *eax_113
            int32_t var_5d0_14 = eax_113[1]
            int32_t var_5cc_14 = eax_113[2]
            int32_t var_5c8_14 = eax_113[3]
            int32_t var_5c4_14 = eax_113[4]
        
        if (ecx_46 == 0 || ecx_46 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_33 = ecx_46
            float var_7ac_34 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_6bc
            int32_t* eax_116 = sub_4f8710(esi_37, &var_6bc, ebx[3], &var_574, &var_5dc, esi_37.b, 
                var_7ac_34, nullptr, nullptr, nullptr)
            ecx_46 = *eax_116
            int32_t var_5d0_15 = eax_116[1]
            int32_t var_5cc_15 = eax_116[2]
            int32_t var_5c8_15 = eax_116[3]
            int32_t var_5c4_15 = eax_116[4]
        
        if (ecx_46 == 0 || ecx_46 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_35 = ecx_46
            float var_7ac_36 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_71c
            int32_t* eax_119 = sub_4f8710(esi_37, &var_71c, ebx[0x17], &var_574, &var_5dc, esi_37.b, 
                var_7ac_36, nullptr, nullptr, nullptr)
            ecx_46 = *eax_119
            int32_t var_5d0_16 = eax_119[1]
            int32_t var_5cc_16 = eax_119[2]
            int32_t var_5c8_16 = eax_119[3]
            int32_t var_5c4_16 = eax_119[4]
        
        if (ecx_46 == 0 || ecx_46 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_37 = ecx_46
            float var_7ac_38 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_644
            int32_t* eax_122 = sub_4f8710(esi_37, &var_644, ebx[0x18], &var_574, &var_5dc, esi_37.b, 
                var_7ac_38, nullptr, nullptr, nullptr)
            ecx_46 = *eax_122
            int32_t var_5d0_17 = eax_122[1]
            int32_t var_5cc_17 = eax_122[2]
            int32_t var_5c8_17 = eax_122[3]
            int32_t var_5c4_17 = eax_122[4]
        
        if (ecx_46 == 0 || ecx_46 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_39 = ecx_46
            float var_7ac_40 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_674
            int32_t* eax_125 = sub_4f8710(esi_37, &var_674, ebx[0x2c], &var_574, &var_5dc, esi_37.b, 
                var_7ac_40, nullptr, nullptr, nullptr)
            ecx_46 = *eax_125
            int32_t var_5d0_18 = eax_125[1]
            int32_t var_5cc_18 = eax_125[2]
            int32_t var_5c8_18 = eax_125[3]
            int32_t var_5c4_18 = eax_125[4]
        
        if (ecx_46 == 0 || ecx_46 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_41 = ecx_46
            float var_7ac_42 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            void var_6a4
            int32_t* eax_128 = sub_4f8710(esi_37, &var_6a4, ebx[0x16], &var_574, &var_5dc, esi_37.b, 
                var_7ac_42, nullptr, nullptr, nullptr)
            ecx_46 = *eax_128
            int32_t var_5d0_19 = eax_128[1]
            int32_t var_5cc_19 = eax_128[2]
            int32_t var_5c8_19 = eax_128[3]
            int32_t var_5c4_19 = eax_128[4]
        
        if (ecx_46 == 0 || ecx_46 == 1)
            int32_t eax_130
            
            if ((data_316629c & 8) != 0)
                eax_130 = data_316628c
            else
                data_316629c.d |= 8
                int32_t var_8_9 = 4
                eax_130 = sub_4f5220(data_307c530, "btn_menu")
                data_316628c = eax_130
                int32_t var_8_10 = 0xffffffff
            
            char var_5b5_6
            
            if (*(ebx + 0x2c079) == 0)
                var_5b5_6 = 0
            
            if (*(ebx + 0x2c079) != 0 || *(ebx + 0x2c07a) != 0)
                var_5b5_6 = 1
            
            int32_t edi_25 = *ebx
            
            if (edi_25 == 0)
                sub_4c5870("id != DATAID_NULL", &data_83f3d3, "c:\ax2010\engine\DataArray.h", 0x45, 
                    "DataArray<struct UIState>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            uint32_t ecx_49 = zx.d(edi_25.w)
            
            if (ecx_49 u>= data_be1cbc || *(ecx_49 * 0x438 + data_be1cb8 + 0x434) != edi_25)
                sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                    "c:\ax2010\engine\DataArray.h", 0x46, "DataArray<struct UIState>::DataArrayGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t ecx_51 = ecx_49 * 0x438 + data_be1cb8
            
            if (eax_130 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_84 = *(ecx_51 + (eax_130 << 2) + 0x30)
            int128_t* eax_135
            int32_t ecx_52
            
            if (edx_84 != 0)
                eax_135, ecx_52 = sub_4fc1e0(ecx_51, edx_84)
            else
                eax_135 = sub_4fc0d0()
                *(eax_135 + 4) = &data_83f3d3
                *(ecx_51 + ((eax_130 + 0xc) << 2)) = *(eax_135 + 0x1bc)
            
            bool cond:10_1 = (data_316629c & 0x10) != 0
            ecx_52.b = var_5b5_6
            *(eax_135 + 0x22) = ecx_52.b
            
            if (not(cond:10_1))
                data_316629c.d |= 0x10
                int32_t var_8_11 = 5
                data_3166288 = sub_4f5220(data_307c530, "rgn_phases")
                int32_t var_8_12 = 0xffffffff
            
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_43 = ecx_52
            float var_7ac_44 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int32_t* eax_138 = sub_4f8710(esi_37, &var_60c, *ebx, &var_574, &var_5dc, esi_37.b, 
                var_7ac_44, nullptr, nullptr, nullptr)
            int32_t ecx_53 = eax_138[2]
            int32_t esi_38 = *eax_138
            int32_t edi_27 = eax_138[1]
            int32_t ecx_54 = eax_138[3]
            int32_t var_5c4_20 = eax_138[4]
            int32_t* eax_139
            
            if (esi_38 != 1 || edi_27 != data_3166288)
                eax_139 = arg1
            else
                eax_139 = arg1
                *eax_139 = 0xb
                eax_139[2] = ecx_54
            
            if ((data_316629c & 0x20) == 0)
                data_316629c.d |= 0x20
                int32_t var_8_13 = 6
                data_3166284 = sub_4f5220(data_307c530, "tblGamblingButtons")
                eax_139 = arg1
                int32_t var_8_14 = 0xffffffff
            
            if (esi_38 == 1 && edi_27 == data_3166284)
                *eax_139 = 0xa
                eax_139[2] = ecx_53
    else
        __builtin_memset(&var_5d4, 0, 0x14)
        int32_t eax_12 = sub_40a930(&var_5b4)
        unimplemented  {call 0x40a930}
        bool cond:2_1 = (data_316629c & 1) != 0
        __builtin_memcpy(&var_574, eax_12, 0x40)
        
        if (not(cond:2_1))
            data_316629c.d |= 1
            int32_t var_8_1 = 0
            data_3166298 = sub_4f5220(data_307c794, "BtnBackMulti")
            int32_t var_8_2 = 0xffffffff
        
        if ((data_316629c & 2) == 0)
            data_316629c.d |= 2
            int32_t var_8_3 = 1
            data_3166294 = sub_4f5220(data_307c794, "BtnBack")
            int32_t var_8_4 = 0xffffffff
        
        if ((data_316629c & 4) == 0)
            data_316629c.d |= 4
            int32_t var_8_5 = 2
            data_3166290 = sub_4f5220(data_307c794, "BtnRematch")
            int32_t var_8_6 = 0xffffffff
        
        int32_t ecx_10
        
        if (*(ebx + 0x2c079) == 0 || ebx[0x10e3f].b == 0)
            int128_t* eax_43 = sub_4f6e90(data_3166294, sub_4fc3d0(&data_be1cb8, ebx[1]), &data_83f3d3)
            int32_t edi_14 = data_3166290
            *(eax_43 + 0x21) = 1
            int128_t* eax_45 = sub_4f6e90(edi_14, sub_4fc3d0(&data_be1cb8, ebx[1]), &data_83f3d3)
            int32_t edi_16 = data_3166298
            *(eax_45 + 0x21) = 1
            int32_t eax_46
            eax_46, ecx_10 = sub_4fc3d0(&data_be1cb8, ebx[1])
            *(sub_4f6e90(edi_16, eax_46, &data_83f3d3) + 0x21) = 1
        else
            int32_t eax_17 = *(data_27e7a40 + 0x2c4960)
            
            if (eax_17 != 4)
                char* edx_4
                edx_4.b = eax_17 != 2
                var_5e4 = edx_4
            else
                var_5e4 = nullptr
            
            int128_t* eax_19 = sub_4f6e90(data_3166294, sub_4fc3d0(&data_be1cb8, ebx[1]), &data_83f3d3)
            int32_t edi_3 = data_3166290
            bool ecx_8 = var_5e4 != 1
            *(eax_19 + 0x21) = ecx_8
            int128_t* eax_21 = sub_4f6e90(edi_3, sub_4fc3d0(&data_be1cb8, ebx[1]), &data_83f3d3)
            int32_t edi_5 = data_3166298
            *(eax_21 + 0x21) = ecx_8
            int32_t eax_22
            eax_22, ecx_10 = sub_4fc3d0(&data_be1cb8, ebx[1])
            int128_t* eax_23 = sub_4f6e90(edi_5, eax_22, &data_83f3d3)
            *(eax_23 + 0x21) = var_5e4 != 0
            void* eax_24 = data_27e7a40
            
            if (*(eax_24 + 0x2c4960) == 2)
                int32_t edx_6 = *(*(eax_24 + 0x2c495c) * 0x1f8 + eax_24 + 0xcbc)
                ecx_10 = 0
                int32_t var_5fc_2 = edx_6
                
                if (edx_6 != 0)
                    int32_t i_6 = 0
                    
                    if (*(eax_24 + 0x2c4958) s> 0)
                        int32_t var_5e8_1 = 0
                        int32_t i_4
                        
                        do
                            if (*(ecx_10 + eax_24 + 0xcac) == edx_6)
                                int32_t edx_7 = *(ecx_10 + eax_24 + 0xc18)
                                int32_t ecx_13 = 0
                                
                                if (*(ecx_10 + eax_24 + 0xb08) == 0)
                                    ecx_13 = 1
                                
                                if (*(ecx_10 + eax_24 + 0xb58) == 0)
                                    ecx_13 += 1
                                
                                if (*(ecx_10 + eax_24 + 0xba8) == 0)
                                    ecx_13 += 1
                                
                                if (*(ecx_10 + eax_24 + 0xbf8) == 0)
                                    ecx_13 += 1
                                
                                int32_t var_7a0_4 = edx_7
                                int32_t var_7a4_4 = ecx_13
                                char* var_7a8_1 =
                                    sub_4fd8f0(ecx_10 + eax_24 + 0xad8, edx_7, "Rematch", nullptr)
                                int32_t var_8_7 = 3
                                char* i_9 = *sub_4c4a50(&var_5e4, "%s (%d/%d")
                                i_5 = &data_83f3d3
                                
                                if (i_9 != 0)
                                    i_5 = i_9
                                
                                int128_t* eax_29 = sub_4f6e90(data_3166290, 
                                    sub_4fc3d0(&data_be1cb8, ebx[1]), &data_83f3d3)
                                *(eax_29 + 0x64) = *eax_29 + 1
                                sub_4c4590(i_5)
                                *(eax_29 + 0x151) = 1
                                int32_t var_8_8 = 0xffffffff
                                char* eax_33 = var_5e4
                                
                                if (eax_33 != 0 && *eax_33 != 0)
                                    void* eax_35 = sub_4c4060(&var_5e4)
                                    int32_t temp2_1 = *(eax_35 + 4)
                                    *(eax_35 + 4) -= 1
                                    
                                    if (temp2_1 == 1)
                                        int32_t esi_16 = *(eax_35 + 0xc) + 0x10
                                        sub_4f4430(eax_35, sub_4f4380(esi_16), esi_16)
                                
                                int32_t edi_10 = *(ecx_10 + eax_24 + 0xc18)
                                int32_t esi_17 = 0
                                char var_5b5_2 = 0
                                
                                if (edi_10 s> 0)
                                    int32_t eax_38 = sub_4194b0()
                                    void* ecx_14 = ecx_10 + eax_24 + 0xad8
                                    
                                    do
                                        if (*ecx_14 == eax_38)
                                            var_5b5_2 = 1
                                            break
                                        
                                        esi_17 += 1
                                        ecx_14 += 0x50
                                    while (esi_17 s< edi_10)
                                
                                int32_t edi_11 = data_3166290
                                int32_t eax_39
                                int32_t ecx_16
                                eax_39, ecx_16 = sub_4fc3d0(&data_be1cb8, var_610[1])
                                
                                if (edi_11 s>= 0x100)
                                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 
                                        0x518, "UIStateElementGet")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                int32_t edx_8 = *(eax_39 + (edi_11 << 2) + 0x30)
                                int128_t* eax_40
                                
                                if (edx_8 != 0)
                                    eax_40 = sub_4fc1e0(ecx_16, edx_8)
                                else
                                    eax_40 = sub_4fc0d0()
                                    *(eax_40 + 4) = &data_83f3d3
                                    *(eax_39 + (edi_11 << 2) + 0x30) = *(eax_40 + 0x1bc)
                                
                                ebx = var_610
                                edx_6 = var_5fc_2
                                *(eax_40 + 0x23) = var_5b5_2
                                eax_24 = data_27e7a40
                                ecx_10 = var_5e8_1
                            
                            i_4 = i_6 + 1
                            ecx_10 += 0x1f8
                            i_6 = i_4
                            var_5e8_1 = ecx_10
                        while (i_4 s< *(eax_24 + 0x2c4958))
        
        int32_t eax_51 = var_5d4
        int32_t esi_27
        
        if (eax_51 == 0 || eax_51 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            esi_27 = var_5e0_1.d
            int32_t var_7ac_5 = ecx_10
            float var_7ac_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int32_t* eax_49 = sub_4f8710(esi_27, &var_60c, ebx[2], &var_574, &var_5dc, esi_27.b, 
                var_7ac_6, nullptr, nullptr, nullptr)
            int32_t edx_10 = eax_49[1]
            var_5d4 = *eax_49
            ecx_10 = eax_49[2]
            int32_t var_5d0_3 = edx_10
            int32_t var_5c4_3 = eax_49[4]
            eax_51 = var_5d4
            int32_t var_5cc_3 = ecx_10
            int32_t var_5c8_3 = eax_49[3]
        else
            esi_27 = var_5e0_1.d
        
        if (eax_51 == 0 || eax_51 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_7 = ecx_10
            float var_7ac_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int32_t* eax_53 = sub_4f8710(esi_27, &var_60c, ebx[1], &var_574, &var_5dc, esi_27.b, 
                var_7ac_8, nullptr, nullptr, nullptr)
            int32_t edx_12 = eax_53[1]
            var_5d4 = *eax_53
            ecx_10 = eax_53[2]
            int32_t var_5d0_4 = edx_12
            int32_t var_5c4_4 = eax_53[4]
            eax_51 = var_5d4
            int32_t var_5cc_4 = ecx_10
            int32_t var_5c8_4 = eax_53[3]
        
        if (eax_51 == 0 || eax_51 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_9 = ecx_10
            float var_7ac_10 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            int32_t* eax_56 = sub_4f8710(esi_27, &var_60c, ebx[3], &var_574, &var_5dc, esi_27.b, 
                var_7ac_10, nullptr, nullptr, nullptr)
            int32_t edx_14 = eax_56[1]
            var_5d4 = *eax_56
            ecx_10 = eax_56[2]
            int32_t var_5d0_5 = edx_14
            int32_t var_5c4_5 = eax_56[4]
            eax_51 = var_5d4
            int32_t var_5cc_5 = ecx_10
            int32_t var_5c8_5 = eax_56[3]
        
        if (eax_51 == 0 || eax_51 == 1)
            unimplemented  {fld st0, dword [0x8c4d34]}
            int32_t var_7ac_11 = ecx_10
            float var_7ac_12 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            ecx_10 = sub_4f8710(esi_27, &var_5d4, ebx[4], &var_574, &var_5dc, esi_27.b, var_7ac_12, 
                nullptr, nullptr, nullptr)
        
        unimplemented  {fld st0, dword [0x8c4d34]}
        int32_t var_7ac_13 = ecx_10
        float var_7ac_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        var_5dc = 0f
        int32_t var_5d8_2 = 0
        int32_t ecx_21 = sub_4f8710(esi_27, &var_5d4, ebx[0x2e], &var_574, &var_5dc, 0, var_7ac_14, 
            nullptr, nullptr, nullptr)
        unimplemented  {fld st0, dword [0x8c4d34]}
        int32_t var_7ac_15 = ecx_21
        float var_7ac_16 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        sub_4f8710(esi_27, &var_5d4, *ebx, &var_574, &var_5dc, 0, var_7ac_16, nullptr, nullptr, nullptr)
    void* eax_142 = sub_46b2b0(*(data_27e7a40 + 0x74))
    
    if (*arg1 != 0xe || ebx[0x2ff9].b != 0)
        *(eax_142 + 0x1f40) = 0
    else
        *(eax_142 + 0x1f40) = arg1[1]
    
    void* eax_143 = data_27e7a40
    __builtin_memcpy(eax_143 + 0x78, arg1, 0x20)
    HCURSOR hCursor
    char result
    
    if (ebx[0x2ff9].b != 0)
        result = sub_4c6230(&var_5dc)
        unimplemented  {call 0x4c6230}
        
        if (result == 0)
            goto label_44a2c2
        
        hCursor = nullptr
    label_44a2b9:
        result = SetCursor(hCursor)
    label_44a2c2:
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_5a6aba(eax_2 ^ &__saved_ebp)
        return result
    
    int32_t* edi_30 = *(eax_143 + 0x548)
    PSTR lpCursorName
    
    if (edi_30[0x2feb] != 0)
    label_44a2a2:
        result = sub_4c6230(&var_5dc)
        unimplemented  {call 0x4c6230}
        
        if (result == 0)
            goto label_44a2c2
        
        lpCursorName = 0x7f00
    else
        if (*arg1 == 0)
            int32_t esi_41 = data_be1cb8
            
            if (*(edi_30 + 0x2c07a) == 0)
            label_44a204:
                
                if (edi_30[0x10e3f].b == 0)
                    goto label_44a232
                
                int32_t esi_42 = edi_30[1]
                
                if (esi_42 != 0 && *(sub_4fc3d0(&data_be1cb8, esi_42) + 0x1c) != 2)
                    esi_41 = data_be1cb8
                label_44a232:
                    int32_t edx_91 = *edi_30
                    
                    if (edx_91 != 0)
                        uint32_t eax_150 = zx.d(edx_91.w)
                        
                        if (eax_150 u>= data_be1cbc || *(eax_150 * 0x438 + esi_41 + 0x434) != edx_91)
                            sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                                "c:\ax2010\engine\DataArray.h", 0x46, 
                                "DataArray<struct UIState>::DataArrayGet")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        if (*(eax_150 * 0x438 + esi_41 + 0x1c) != 2)
                            goto label_44a2a2
            else
                int32_t edx_90 = edi_30[3]
                
                if (edx_90 != 0)
                    uint32_t eax_145 = zx.d(edx_90.w)
                    
                    if (eax_145 u>= data_be1cbc || *(eax_145 * 0x438 + esi_41 + 0x434) != edx_90)
                        sub_4c5870("DataArrayTryToGet(id) != NULL", &data_83f3d3, 
                            "c:\ax2010\engine\DataArray.h", 0x46, 
                            "DataArray<struct UIState>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(eax_145 * 0x438 + esi_41 + 0x1c) != 2)
                        goto label_44a204
        
        result = sub_4c6230(&var_5dc)
        unimplemented  {call 0x4c6230}
        
        if (result == 0)
            goto label_44a2c2
        
        lpCursorName = 0x7f89
    
    hCursor = LoadCursorA(nullptr, lpCursorName)
    goto label_44a2b9
}
