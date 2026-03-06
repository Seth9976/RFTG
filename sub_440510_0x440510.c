// 函数名称: sub_440510
// 虚拟地址: 0x440510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_440510(int32_t arg1, int32_t arg2, int128_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_694cda
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_3c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_5abfc0(arg3, 0, 0x48)
    void* eax_4 = *(data_27e7a40 + 0x548)
    
    if (eax_4 == 0)
        sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, "GetGame")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* ebx = *(eax_4 + 0x45844)
    int32_t eax_9 =
        sx.d(*(ebx + 0xaa)) - sx.d(*(ebx + 0xa8)) - sx.d(*(ebx + 0xa6)) - sx.d(*(ebx + 0xa3))
    int32_t ecx_2 = sx.d(*(ebx + 0x458))
    char* i_7
    
    if (ecx_2 s> 1)
        void* edx_1 = ebx + 0x15c
        i_7 = ecx_2 - 1
        char* i
        
        do
            int32_t ecx_7 = sx.d(*(edx_1 + 2)) - sx.d(*(edx_1 - 5)) - sx.d(*(edx_1 - 2)) - sx.d(*edx_1)
            
            if (eax_9 s<= ecx_7)
                eax_9 = ecx_7
            
            edx_1 += 0xb4
            i = i_7
            i_7 -= 1
        while (i != 1)
    
    arg3[1].d = eax_9
    int32_t edx_2 = sx.d(*(ebx + 0x458))
    int32_t ecx_8 = sx.d(*(ebx + 0xa6))
    
    if (edx_2 s> 1)
        eax_9 = ebx + 0x15a
        int32_t i_8 = edx_2 - 1
        int32_t i_1
        
        do
            edx_2 = sx.d(*eax_9)
            
            if (ecx_8 s<= edx_2)
                ecx_8 = edx_2
            
            eax_9 += 0xb4
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
    
    *(arg3 + 0x1c) = ecx_8
    eax_9.b = *(ebx + 0x45a)
    int32_t eax_10
    
    if (eax_9.b s<= 0 || eax_9.b s>= 4 || *(ebx + 0x45b) != 0)
        eax_10 = 0
    else
        eax_10 = 1
    
    edx_2.b = eax_10 != 0
    arg3[2].b = edx_2.b
    int32_t ecx_9 = sx.d(*(ebx + 0x458))
    int32_t eax_11 = sx.d(*(ebx + 0xa8))
    
    if (ecx_9 s> 1)
        void* edx_3 = ebx + 0x15c
        int32_t i_9 = ecx_9 - 1
        int32_t i_2
        
        do
            int32_t ecx_10 = sx.d(*edx_3)
            
            if (eax_11 s<= ecx_10)
                eax_11 = ecx_10
            
            edx_3 += 0xb4
            i_2 = i_9
            i_9 -= 1
        while (i_2 != 1)
    
    *(arg3 + 0x28) = eax_11
    eax_11.b = *(ebx + 0x45a) == 3
    *(arg3 + 0x2c) = eax_11.b
    int32_t ecx_11 = sx.d(*(ebx + 0x458))
    void* eax_12 = ebx + 0xa3
    int32_t eax_13 = sx.d(*eax_12)
    
    if (ecx_11 s> 1)
        void* edx_4 = ebx + 0x157
        int32_t i_10 = ecx_11 - 1
        int32_t i_3
        
        do
            int32_t ecx_12 = sx.d(*edx_4)
            
            if (eax_13 s<= ecx_12)
                eax_13 = ecx_12
            
            edx_4 += 0xb4
            i_3 = i_10
            i_10 -= 1
        while (i_3 != 1)
    
    *(arg3 + 0x34) = eax_13
    *(arg3 + 0x38) = sub_440490(ebx)
    arg3[4].d = sub_440430(sub_440390)
    sub_4fa8a0(arg4, 1, fconvert.s(float.t(0)))
    int32_t i_4
    int80_t st0_1
    st0_1, i_4 = sub_4fa8a0(arg5, 1, fconvert.s(float.t(0)))
    int16_t top = 0xfffe
    
    if ((data_3165d24 & 1) == 0)
        data_3165d24.d |= 1
        int32_t var_c_1 = 0
        int32_t eax_18
        eax_18, i_4 = sub_4f5220(data_307c794, "tblPlayers")
        data_3165d20 = eax_18
        int32_t var_c_2 = 0xffffffff
    
    if ((data_3165d24 & 2) == 0)
        data_3165d24.d |= 2
        int32_t var_c_3 = 1
        int32_t eax_19
        eax_19, i_4 = sub_4f5220(data_307c798, "TxtPointsTableau")
        data_3165d1c = eax_19
        int32_t var_c_4 = 0xffffffff
    
    if ((data_3165d24 & 4) == 0)
        data_3165d24.d |= 4
        int32_t var_c_5 = 2
        int32_t eax_20
        eax_20, i_4 = sub_4f5220(data_307c798, "TxtPointsChits")
        data_3165d18 = eax_20
        int32_t var_c_6 = 0xffffffff
    
    if ((data_3165d24 & 8) == 0)
        data_3165d24.d |= 8
        int32_t var_c_7 = 3
        int32_t eax_22
        eax_22, i_4 = sub_4f5220(data_307c798, "TxtPointsGoals")
        data_3165d14 = eax_22
        int32_t var_c_8 = 0xffffffff
    
    if ((data_3165d24 & 0x10) == 0)
        data_3165d24.d |= 0x10
        int32_t var_c_9 = 4
        int32_t eax_23
        eax_23, i_4 = sub_4f5220(data_307c798, "TxtPointsPrestige")
        data_3165d10 = eax_23
        int32_t var_c_10 = 0xffffffff
    
    if ((data_3165d24 & 0x20) == 0)
        data_3165d24.d |= 0x20
        int32_t var_c_11 = 5
        int32_t eax_24
        eax_24, i_4 = sub_4f5220(data_307c798, "txtCardCount")
        data_3165d0c = eax_24
        int32_t var_c_12 = 0xffffffff
    
    if ((data_3165d24 & 0x40) == 0)
        data_3165d24.d |= 0x40
        int32_t var_c_13 = 6
        int32_t eax_26
        eax_26, i_4 = sub_4f5220(data_307c798, "TxtTotal")
        data_3165d08 = eax_26
        int32_t var_c_14 = 0xffffffff
    
    bool cond:1 = *(ebx + 0x458) s<= 0
    i_7 = nullptr
    int32_t var_20
    
    if (not(cond:1))
        char* i_12
        
        do
            int32_t ebx_1 = data_3165d20
            char* i_11 = i_7
            var_20 = 0
            void* eax_27
            int32_t ecx_17
            eax_27, ecx_17 = sub_4fc3d0(&data_be1cb8, arg4)
            
            if (ebx_1 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_8 = *(eax_27 + (ebx_1 << 2) + 0x30)
            int128_t* eax_28
            
            if (edx_8 != 0)
                eax_28 = sub_4fc1e0(ecx_17, edx_8)
            else
                eax_28 = sub_4fc0d0()
                *(eax_28 + 4) = &data_83f3d3
                edx_8 = *(eax_28 + 0x1bc)
                *(eax_27 + (ebx_1 << 2) + 0x30) = edx_8
            
            char* esi_3 = *(eax_27 + 4)
            
            if (*(esi_3 + 4) != 0x1e)
                sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                    "UIDefGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*esi_3 == 0)
                sub_520800(eax_28, edx_8.b, esi_3, 0)
                
                if (*esi_3 == 0)
                    sub_509540(esi_3)
            
            void* eax_33
            int32_t ecx_20
            eax_33, ecx_20 = sub_4f7720(&var_20, ebx_1 * 0x118 + ***esi_3, eax_28)
            int32_t esi_4 = *(eax_33 + 0x434)
            unimplemented  {fldz }
            int32_t var_40_2 = ecx_20
            float var_40_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            sub_4fa8a0(esi_4, 1, var_40_3)
            top -= 1
            unimplemented  {call 0x4fa8a0}
            int32_t ebx_4 = data_3165d1c
            int32_t eax_34
            int32_t ecx_21
            eax_34, ecx_21 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (ebx_4 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_10 = *(eax_34 + (ebx_4 << 2) + 0x30)
            int128_t* eax_35
            
            if (edx_10 != 0)
                eax_35 = sub_4fc1e0(ecx_21, edx_10)
            else
                eax_35 = sub_4fc0d0()
                *(eax_35 + 4) = &data_83f3d3
                *(eax_34 + (ebx_4 << 2) + 0x30) = *(eax_35 + 0x1bc)
            
            *(eax_35 + 0x64) = *eax_35 + 1
            sub_4c4590(U"0")
            int32_t ebx_6 = data_3165d18
            *(eax_35 + 0x151) = 1
            int32_t eax_36
            int32_t ecx_23
            eax_36, ecx_23 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (ebx_6 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_13 = *(eax_36 + (ebx_6 << 2) + 0x30)
            int128_t* eax_37
            
            if (edx_13 != 0)
                eax_37 = sub_4fc1e0(ecx_23, edx_13)
            else
                eax_37 = sub_4fc0d0()
                *(eax_37 + 4) = &data_83f3d3
                *(eax_36 + (ebx_6 << 2) + 0x30) = *(eax_37 + 0x1bc)
            
            *(eax_37 + 0x64) = *eax_37 + 1
            sub_4c4590(U"0")
            int32_t ebx_8 = data_3165d14
            *(eax_37 + 0x151) = 1
            int32_t eax_38
            int32_t ecx_25
            eax_38, ecx_25 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (ebx_8 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_16 = *(eax_38 + (ebx_8 << 2) + 0x30)
            int128_t* eax_39
            
            if (edx_16 != 0)
                eax_39 = sub_4fc1e0(ecx_25, edx_16)
            else
                eax_39 = sub_4fc0d0()
                *(eax_39 + 4) = &data_83f3d3
                *(eax_38 + (ebx_8 << 2) + 0x30) = *(eax_39 + 0x1bc)
            
            *(eax_39 + 0x64) = *eax_39 + 1
            sub_4c4590(U"0")
            int32_t ebx_10 = data_3165d0c
            *(eax_39 + 0x151) = 1
            int32_t eax_40
            int32_t ecx_27
            eax_40, ecx_27 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (ebx_10 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_19 = *(eax_40 + (ebx_10 << 2) + 0x30)
            int128_t* eax_41
            
            if (edx_19 != 0)
                eax_41 = sub_4fc1e0(ecx_27, edx_19)
            else
                eax_41 = sub_4fc0d0()
                *(eax_41 + 4) = &data_83f3d3
                *(eax_40 + (ebx_10 << 2) + 0x30) = *(eax_41 + 0x1bc)
            
            *(eax_41 + 0x64) = *eax_41 + 1
            sub_4c4590(U"0")
            int32_t ebx_12 = data_3165d08
            *(eax_41 + 0x151) = 1
            int32_t eax_42
            int32_t ecx_29
            eax_42, ecx_29 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (ebx_12 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_22 = *(eax_42 + (ebx_12 << 2) + 0x30)
            int128_t* eax_43
            
            if (edx_22 != 0)
                eax_43 = sub_4fc1e0(ecx_29, edx_22)
            else
                eax_43 = sub_4fc0d0()
                *(eax_43 + 4) = &data_83f3d3
                *(eax_42 + (ebx_12 << 2) + 0x30) = *(eax_43 + 0x1bc)
            
            *(eax_43 + 0x64) = *eax_43 + 1
            sub_4c4590(U"0")
            *(eax_43 + 0x151) = 1
            int32_t edi_16 = data_3165d10
            int32_t eax_44
            int32_t ecx_31
            eax_44, ecx_31 = sub_4fc3d0(&data_be1cb8, esi_4)
            
            if (edi_16 s>= 0x100)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_25 = *(eax_44 + (edi_16 << 2) + 0x30)
            int128_t* eax_45
            
            if (edx_25 != 0)
                eax_45 = sub_4fc1e0(ecx_31, edx_25)
            else
                eax_45 = sub_4fc0d0()
                *(eax_45 + 4) = &data_83f3d3
                *(eax_44 + (edi_16 << 2) + 0x30) = *(eax_45 + 0x1bc)
            
            *(eax_45 + 0x64) = *eax_45 + 1
            sub_4c4590(U"0")
            i_12 = i_7
            *(eax_45 + 0x151) = 1
            i_4 = sx.d(*(ebx + 0x458))
            i_7 = &i_12[1]
        while (&i_12[1] s< i_4)
    
    if ((data_3165d24 & 0x80) == 0)
        data_3165d24.d |= 0x80
        int32_t var_c_15 = 7
        int32_t eax_48
        eax_48, i_4 = sub_4f5220(data_307c790, "txtGameOverReason")
        data_3165d04 = eax_48
        int32_t var_c_16 = 0xffffffff
    
    int32_t* var_40_4 = &i_7
    sub_4c40c0(0x11, i_4)
    char* i_13 = i_7
    char const* const eax_49 = "VP POOL EXHAUSTED"
    char const i_5
    
    do
        i_5 = *eax_49
        *(eax_49 + i_13 - "VP POOL EXHAUSTED") = i_5
        eax_49 = &eax_49[1]
    while (i_5 != 0)
    
    int32_t var_c_17 = 8
    
    if (*(ebx + 0x1e04) s> i_5)
        int32_t eax_50 = sub_46b230(*(data_27e7a40 + 0x74))
        void* edi_17 = data_27e7a40
        void* edx_31 = *(edi_17 + 0x548)
        int32_t ecx_35 = *(edi_17 + 0x74)
        var_20 = eax_50
        int32_t eax_51 = 0xc
        
        if (edx_31 == 0)
            sub_4c5870("gCClient->rftgClientData", &data_83f3d3, "..\code\RFTGClient.cpp", 0xcc, 
                "GetGame")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_32 = *(edx_31 + 0x45844)
        int32_t i_6 = sx.d(*(ecx_35 * 0xb4 + edx_32 + 0x56))
        int32_t esi_7 = 0
        
        if (i_6 != 0xffffffff)
            do
                void* ecx_37 = edx_32 + i_6 * 0x14
                
                if ((*(*(ecx_37 + 0x46c) + 0x10) & 0x10000) != 0)
                    esi_7 += 1
                
                i_6 = sx.d(*(ecx_37 + 0x476))
            while (i_6 != 0xffffffff)
            
            eax_51 = i_6 + 0xf
            
            if (esi_7 == 0)
                eax_51 = 0xc
        
        if (*(edi_17 + 0x2c4960) == 1 && data_27c0720 == 1)
            int32_t ecx_39 = *(data_27e7a54 + 0x204)
            
            if (data_27c076c s< *(ecx_39 * 0x18 + &data_8c77ec) - 1)
                if (ecx_39 == 0)
                    eax_51 = 5
                
                if (ecx_39 == 1)
                    eax_51 = 8
        
        char const* const eax_63
        
        if (*(ebx + 0x1ec2) s< 0x1e)
            int32_t esi_8 = sx.d(*(ebx + 0x458))
            int32_t ecx_40 = 0
            
            if (esi_8 s<= 0)
            label_440ede:
                eax_63 = "EMPIRE COMPLETE"
                
                if (var_20 s< eax_51)
                    eax_63 = "OPPONENT EMPIRE COMPLETE"
            else
                void* edx_37 = eax_12
                
                while (*edx_37 s< 0xf)
                    ecx_40 += 1
                    edx_37 += 0xb4
                    
                    if (ecx_40 s>= esi_8)
                        goto label_440ede
                
                eax_63 = "PRESTIGE LIMIT"
        else
            eax_63 = "30 ROUND LIMIT"
        
        sub_4c4590(eax_63)
        i_13 = i_7
    
    char* const i_14 = &data_83f3d3
    
    if (i_13 != 0)
        i_14 = i_13
    
    int32_t ebx_15 = data_3165d04
    int32_t eax_64
    int32_t ecx_41
    eax_64, ecx_41 = sub_4fc3d0(&data_be1cb8, arg5)
    
    if (ebx_15 s>= 0x100)
        sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, "UIStateElementGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx_38 = *(eax_64 + (ebx_15 << 2) + 0x30)
    int128_t* eax_66
    
    if (edx_38 != 0)
        eax_66 = sub_4fc1e0(ecx_41, edx_38)
    else
        eax_66 = sub_4fc0d0()
        *(eax_66 + 4) = &data_83f3d3
        *(eax_64 + (ebx_15 << 2) + 0x30) = *(eax_66 + 0x1bc)
    
    *(eax_66 + 0x64) = *eax_66 + 1
    int32_t* result = sub_4c4590(i_14)
    *(eax_66 + 0x151) = 1
    int32_t var_c_18 = 0xffffffff
    
    if (i_13 != 0 && *i_13 != 0)
        if (*(i_13 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp4_1 = *(i_13 - 0xc)
        *(i_13 - 0xc) -= 1
        
        if (temp4_1 == 1)
            void* edx_41 = data_26a44e4
            int32_t esi_13 = *(i_13 - 4) + 0x10
            
            if (edx_41 == 0)
                sub_4f4250()
                edx_41 = data_26a44e4
            
            int32_t eax_69 = 0
            int32_t* edi_19
            
            while (true)
                if (esi_13 s<= 1 << (eax_69.b + 4))
                    edi_19 = edx_41 + eax_69 * 0x14
                    break
                
                eax_69 += 1
                
                if (eax_69 s>= 7)
                    edi_19 = edx_41 + 0x8c
                    break
            
            result = sub_4f4430(&i_13[0xfffffff0], edi_19, esi_13)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
