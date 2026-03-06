// 函数名称: sub_52c3f0
// 虚拟地址: 0x52c3f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_52c3f0()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_693644
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t var_74 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if ((data_3165974 & 1) == 0)
        data_3165974.d |= 1
        int32_t var_c_1 = 0
        data_31602d0 = sub_509140(0x22, "sys/editor/ui2/editor_styles.ui2")
        int32_t var_c_2 = 0xffffffff
    
    bool cond:0 = data_30d74e8 != 0
    data_be1ef8 = data_31602d0
    
    if (not(cond:0))
        sub_4c5870("gUI2Editor.asset", &data_83f3d3, "UI2.cpp", 0x1424, "UI2EditorUpdate")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float var_3c = fconvert.s(fconvert.t(data_8c4d34) * fconvert.t(1000.0))
    long double x87_r7_2 = float.t(0)
    long double x87_r6 = fconvert.t(var_3c)
    x87_r6 - x87_r7_2
    int32_t eax_4
    eax_4.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p)
        x87_r7_3 = x87_r7_2 + fconvert.t(0.5)
    else
        x87_r7_3 = x87_r7_2 - fconvert.t(0.5)
    
    int32_t eax_6 = sub_685f40(x87_r7_3)
    data_30d94f4 += eax_6
    bool cond:1 = data_315b338 != 0
    int32_t edx = data_be1f04
    int32_t eax_7 = data_be1f08
    data_30d94fc = data_be1f00
    data_30d9500 = edx
    data_30d9504 = eax_7
    float var_38
    float var_28
    int32_t eax_12
    int32_t edx_6
    
    if (cond:1)
        eax_12, edx_6 = sub_529510()
    else
        int32_t eax_8
        float* ecx_1
        int80_t st0_1
        st0_1, eax_8, ecx_1 = sub_4c6230(&var_38)
        
        if (eax_8.b != 0)
            int32_t* var_78_1 = &var_38
            void*** eax_9 = sub_526050(eax_8, data_30d9508, &var_28, ecx_1)
            data_30d94fc = eax_9[1]
            ecx_1 = eax_9[2]
            data_30d9500 = ecx_1
            data_30d9504 = eax_9[3]
        
        if ((*(data_27e7fdc + 0xc) & 1) != 0)
            ecx_1 = data_27e7bbc
        
        int32_t eax_11
        
        if ((*(data_27e7fdc + 0xc) & 1) == 0 || ecx_1[6].b == 0)
            eax_11 = 0
        else
            eax_11 = 1
        
        int32_t* const var_78_2 = &data_8409a8
        eax_12, edx_6 = sub_4d7610(eax_11, &var_38, ecx_1.b, eax_11, data_30d94f4, &data_30d94f8)
    
    sub_530010(eax_12, edx_6, data_30d94fc, 0x315f37c)
    sub_5288e0(fconvert.s(fconvert.t(data_8c4d34)))
    
    if ((data_3165974 & 2) == 0)
        data_3165974.d |= 2
        int32_t var_c_3 = 1
        data_3165970 = sub_509140(0x22, "sys/editor/ui2/editor_main.ui2")
        int32_t var_c_4 = 0xffffffff
    
    void* eax_14 = data_27e7fd0
    var_3c = fconvert.s(float.t(*(eax_14 + 0x14)))
    float var_40 = fconvert.s(float.t(*(eax_14 + 0x18)))
    long double x87_r6_3 = float.t(0)
    var_38 = fconvert.s(x87_r6_3)
    float var_34 = fconvert.s(x87_r6_3)
    float var_30 = fconvert.s(fconvert.t(var_3c))
    float var_24 = var_34
    float var_2c = fconvert.s(fconvert.t(var_40))
    var_28 = var_38
    float var_20 = var_30
    float var_1c = var_2c
    int32_t ecx_4
    int80_t st0_3
    st0_3, ecx_4 = sub_525c20(var_2c, data_3165970, &data_30d9508, &var_28)
    int32_t edx_9 = data_30d9508
    void* eax_17
    int32_t ecx_5
    eax_17, ecx_5 = sub_530500(ecx_4, edx_9)
    *(eax_17 + 0x19d8) = sub_52bc50
    char* const var_5c
    char* var_58
    char* var_4c
    char* var_44
    
    if (data_30da51c s> 0)
        int32_t* eax_19 = sub_528f30(data_30d951c)
        float eax_21 = sub_52adb0(&var_40, edx_9, eax_19)
        var_3c = eax_21
        sub_4c42b0(&var_58, "numProps")
        int32_t var_c_5 = 2
        data_30d9508
        int32_t edx_11
        ecx_5, edx_11 = sub_5287a0(0, &var_58, eax_21)
        int32_t var_c_6 = 0xffffffff
        char* eax_22 = var_58
        
        if (eax_22 != 0 && *eax_22 != 0)
            void* eax_24 = sub_4c4060(&var_58)
            int32_t temp2_1 = *(eax_24 + 4)
            *(eax_24 + 4) -= 1
            
            if (temp2_1 == 1)
                int32_t esi_4 = *(eax_24 + 0xc) + 0x10
                ecx_5, edx_11 = sub_4f4430(eax_24, sub_4f4380(esi_4), esi_4)
        
        char* const ebx_4 = nullptr
        var_5c = nullptr
        
        if (var_3c s> 0)
            int32_t* esi_6 = var_40 i+ 4
            int32_t* var_60_1 = esi_6
            
            while (true)
                sub_52a9f0(*esi_6, edx_11, eax_19, &var_40)
                int32_t var_c_7 = 3
                char* edi_3 = esi_6[1]
                
                if (edi_3 == 0)
                    sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                char* var_54
                sub_4c42b0(&var_54, edi_3)
                var_c_7.b = 4
                sub_4c42b0(&var_58, "propName")
                var_c_7.b = 5
                data_30d9508
                sub_528840(ebx_4, &var_58, &var_54)
                var_c_7.b = 4
                char* eax_28 = var_58
                
                if (eax_28 != 0 && *eax_28 != 0)
                    void* eax_30 = sub_4c4060(&var_58)
                    int32_t temp6_1 = *(eax_30 + 4)
                    *(eax_30 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        int32_t esi_10 = *(eax_30 + 0xc) + 0x10
                        sub_4f4430(eax_30, sub_4f4380(esi_10), esi_10)
                
                var_c_7.b = 3
                char* eax_33 = var_54
                
                if (eax_33 != 0 && *eax_33 != 0)
                    void* eax_35 = sub_4c4060(&var_54)
                    int32_t temp8_1 = *(eax_35 + 4)
                    *(eax_35 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        int32_t esi_12 = *(eax_35 + 0xc) + 0x10
                        sub_4f4430(eax_35, sub_4f4380(esi_12), esi_12)
                
                char* var_50
                sub_4c42b0(&var_50, "propValue")
                var_c_7.b = 6
                data_30d9508
                ecx_5 = sub_528840(ebx_4, &var_50, &var_40)
                var_c_7.b = 3
                char* eax_38 = var_50
                
                if (eax_38 != 0 && *eax_38 != 0)
                    void* eax_40 = sub_4c4060(&var_50)
                    int32_t temp10_1 = *(eax_40 + 4)
                    *(eax_40 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        int32_t esi_15 = *(eax_40 + 0xc) + 0x10
                        ecx_5 = sub_4f4430(eax_40, sub_4f4380(esi_15), esi_15)
                
                edx_11 = eax_19[0x677]
                
                if (*(sub_52ae50(ebx_4) + 0xc) == 2)
                    sub_4c42b0(&var_4c, "value_Color")
                    var_c_7.b = 7
                    int32_t* edx_15 = data_30d9508
                    int32_t* var_78_13 = &var_4c
                    sub_528650(sub_530500(ecx_5, edx_15), ebx_4, edx_15)
                    var_c_7.b = 3
                    char* eax_45 = var_4c
                    
                    if (eax_45 != 0 && *eax_45 != 0)
                        void* eax_47 = sub_4c4060(&var_4c)
                        int32_t temp14_1 = *(eax_47 + 4)
                        *(eax_47 + 4) -= 1
                        
                        if (temp14_1 == 1)
                            int32_t esi_19 = *(eax_47 + 0xc) + 0x10
                            sub_4f4430(eax_47, sub_4f4380(esi_19), esi_19)
                    
                    var_38 =
                        *sub_531120(*sub_521460(*eax_19) + eax_19[1] * 0xc, *var_60_1, data_30d72f4)
                    sub_4c42b0(&var_44, "value_Color")
                    var_c_7.b = 8
                    data_30d9508
                    ecx_5, edx_11 = sub_528700(var_5c, &var_44, &var_38)
                    var_c_7.b = 3
                    char* eax_54 = var_44
                    
                    if (eax_54 != 0 && *eax_54 != 0)
                        void* eax_56 = sub_4c4060(&var_44)
                        int32_t temp15_1 = *(eax_56 + 4)
                        *(eax_56 + 4) -= 1
                        
                        if (temp15_1 == 1)
                            int32_t esi_24 = *(eax_56 + 0xc) + 0x10
                            ecx_5, edx_11 = sub_4f4430(eax_56, sub_4f4380(esi_24), esi_24)
                    
                    ebx_4 = var_5c
                
                int32_t var_c_8 = 0xffffffff
                float eax_59 = var_40
                
                if (eax_59 != 0 && *eax_59 != 0)
                    void* eax_61 = sub_4c4060(&var_40)
                    int32_t temp13_1 = *(eax_61 + 4)
                    *(eax_61 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        int32_t esi_26 = *(eax_61 + 0xc) + 0x10
                        ecx_5, edx_11 = sub_4f4430(eax_61, sub_4f4380(esi_26), esi_26)
                
                var_60_1 = &var_60_1[4]
                ebx_4 = &ebx_4[1]
                var_5c = ebx_4
                
                if (ebx_4 s>= var_3c)
                    break
                
                esi_6 = var_60_1
    
    int32_t ebx_7 = data_30da528
    
    if (ebx_7 != 0xffffffff)
        sub_4c42b0(&var_40, "property_selected")
        int32_t var_c_9 = 9
        int32_t* edx_19 = data_30d9508
        float* var_78_19 = &var_40
        sub_528650(sub_530500(ecx_5, edx_19), ebx_7, edx_19)
        int32_t var_c_10 = 0xffffffff
        float eax_65 = var_40
        
        if (eax_65 != 0 && *eax_65 != 0)
            void* eax_67 = sub_4c4060(&var_40)
            int32_t temp3_1 = *(eax_67 + 4)
            *(eax_67 + 4) -= 1
            
            if (temp3_1 == 1)
                int32_t esi_29 = *(eax_67 + 0xc) + 0x10
                sub_4f4430(eax_67, sub_4f4380(esi_29), esi_29)
        
        int32_t edx_20 = *(sub_528f30(data_30d951c) + 0x19dc)
        int32_t eax_73 = *(sub_52ae50(ebx_7) + 0xc)
        
        if (eax_73 u> 4)
            sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x1472, "UI2EditorUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_75
        float* ecx_16
        int32_t* edx_21
        
        switch (eax_73)
            case 0
                float* ecx_19 = &var_3c
                sub_4c4330("propertyEditBox_selected", edx_20, ecx_19)
                int32_t var_c_15 = 0xb
                edx_21 = data_30d9508
                eax_75 = sub_530500(ecx_19, edx_21)
                float* var_78_24 = &var_3c
            case 1, 4
                ecx_16 = &var_3c
                sub_4c4330("propertyComboBox_selected", edx_20, ecx_16)
                int32_t var_c_11 = 0xa
            label_52ca87:
                edx_21 = data_30d9508
                eax_75 = sub_530500(ecx_16, edx_21)
                float* var_78_21 = &var_3c
            case 2
                ecx_16 = &var_3c
                sub_4c4330("propertyColorBox_selected", edx_20, ecx_16)
                int32_t var_c_16 = 0xc
                goto label_52ca87
            case 3
                float* ecx_20 = &var_3c
                sub_4c4330("propertyFileBox_selected", edx_20, ecx_20)
                int32_t var_c_17 = 0xd
                edx_21 = data_30d9508
                eax_75 = sub_530500(ecx_20, edx_21)
                float* var_78_25 = &var_3c
        
        sub_528650(eax_75, ebx_7, edx_21)
        int32_t var_c_12 = 0xffffffff
        ecx_5 = sub_4c43d0(&var_3c)
    
    int32_t ebx_8 = data_30da52c
    
    if (ebx_8 != 0xffffffff)
        sub_4c42b0(&var_40, "comboBox_open")
        int32_t var_c_13 = 0xe
        int32_t* edx_22 = data_30d9508
        float* var_78_22 = &var_40
        sub_528650(sub_530500(ecx_5, edx_22), ebx_8, edx_22)
        int32_t var_c_14 = 0xffffffff
        float eax_77 = var_40
        
        if (eax_77 != 0 && *eax_77 != 0)
            void* eax_79 = sub_4c4060(&var_40)
            int32_t temp5_1 = *(eax_79 + 4)
            *(eax_79 + 4) -= 1
            
            if (temp5_1 == 1)
                int32_t esi_33 = *(eax_79 + 0xc) + 0x10
                sub_4f4430(eax_79, sub_4f4380(esi_33), esi_33)
        
        void* eax_83 = sub_528f30(data_30d951c)
        *(eax_83 + 0x19dc)
        int32_t eax_85 = *(sub_52ae50(ebx_8) + 0xc)
        
        if (eax_85 == 1)
            data_30da52c
            void* edx_24 = *(eax_83 + 0x19dc)
            char* eax_87 = sub_52b300() + 4
            int32_t var_60_2 = 0
            
            if (*eax_87 != 0)
                var_44 = eax_87
                bool cond:7_1
                
                do
                    char* esi_36 = *var_44
                    
                    if (esi_36 == 0)
                        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    char* const ebx_9
                    
                    if (*esi_36 != 0)
                        void* eax_90 = esi_36
                        void** edx_25 = eax_90 + 1
                        char i
                        
                        do
                            i = *eax_90
                            eax_90 += 1
                        while (i != 0)
                        char* const* var_78_26 = &var_5c
                        sub_4c40c0(eax_90 - edx_25, edx_25)
                        ebx_9 = var_5c
                        char* eax_92 = esi_36
                        edx_24 = ebx_9 - esi_36
                        char i_1
                        
                        do
                            i_1 = *eax_92
                            *(edx_24 + eax_92) = i_1
                            eax_92 = &eax_92[1]
                        while (i_1 != 0)
                    else
                        ebx_9 = &data_83f3d3
                        var_5c = &data_83f3d3
                    
                    float* var_78_27 = &var_40
                    int32_t var_c_18 = 0xf
                    sub_4c40c0(0x11, edx_24)
                    float esi_37 = var_40
                    char const* const eax_93 = "comboBox_itemText"
                    char const i_2
                    
                    do
                        i_2 = *eax_93
                        *(esi_37 i- "comboBox_itemText" + eax_93) = i_2
                        eax_93 = &eax_93[1]
                    while (i_2 != 0)
                    var_c_18.b = 0x10
                    data_30d9508
                    edx_24 = sub_528840(var_60_2, &var_40, &var_5c)
                    var_c_18.b = 0xf
                    
                    if (esi_37 != 0 && *esi_37 != 0)
                        void* eax_95 = sub_4c4060(&var_40)
                        int32_t temp18_1 = *(eax_95 + 4)
                        *(eax_95 + 4) -= 1
                        
                        if (temp18_1 == 1)
                            int32_t esi_39 = *(eax_95 + 0xc) + 0x10
                            edx_24 = sub_4f4430(eax_95, sub_4f4380(esi_39), esi_39)
                    
                    int32_t var_c_19 = 0xffffffff
                    
                    if (ebx_9 != 0 && *ebx_9 != 0)
                        void* eax_99 = sub_4c4060(&var_5c)
                        int32_t temp19_1 = *(eax_99 + 4)
                        *(eax_99 + 4) -= 1
                        
                        if (temp19_1 == 1)
                            int32_t esi_41 = *(eax_99 + 0xc) + 0x10
                            edx_24 = sub_4f4430(eax_99, sub_4f4380(esi_41), esi_41)
                    
                    var_60_2 += 1
                    cond:7_1 = *(var_44 + 8) != 0
                    var_44 = &var_44[8]
                while (cond:7_1)
            
            sub_4c42b0(&var_40, "comboBox_numItems")
            int32_t var_c_20 = 0x11
            data_30d9508
            sub_5287a0(data_30da528, &var_40, var_60_2)
            int32_t var_c_21 = 0xffffffff
            float eax_104 = var_40
            
            if (eax_104 != 0 && *eax_104 != 0)
                void* eax_106 = sub_4c4060(&var_40)
                int32_t temp7_1 = *(eax_106 + 4)
                *(eax_106 + 4) -= 1
                
                if (temp7_1 == 1)
                    int32_t esi_44 = *(eax_106 + 0xc) + 0x10
                    sub_4f4430(eax_106, sub_4f4380(esi_44), esi_44)
        else if (eax_85 == 4)
            char** eax_110
            int32_t edx_32
            eax_110, edx_32 = sub_52b1d0(data_30da52c, *(eax_83 + 0x19dc))
            char* i_3 = *eax_110
            int32_t ebx_11 = 0
            var_3c = eax_110
            
            while (i_3 != 0)
                sub_4c42b0(&var_44, i_3)
                int32_t var_c_22 = 0x12
                sub_4c42b0(&var_40, "comboBox_itemText")
                var_c_22.b = 0x13
                data_30d9508
                edx_32 = sub_528840(ebx_11, &var_40, &var_44)
                var_c_22.b = 0x12
                float eax_111 = var_40
                
                if (eax_111 != 0 && *eax_111 != 0)
                    void* eax_113 = sub_4c4060(&var_40)
                    int32_t temp9_1 = *(eax_113 + 4)
                    *(eax_113 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        int32_t esi_48 = *(eax_113 + 0xc) + 0x10
                        edx_32 = sub_4f4430(eax_113, sub_4f4380(esi_48), esi_48)
                
                int32_t var_c_23 = 0xffffffff
                char* eax_116 = var_44
                
                if (eax_116 != 0 && *eax_116 != 0)
                    void* eax_118 = sub_4c4060(&var_44)
                    int32_t temp12_1 = *(eax_118 + 4)
                    *(eax_118 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        int32_t esi_50 = *(eax_118 + 0xc) + 0x10
                        edx_32 = sub_4f4430(eax_118, sub_4f4380(esi_50), esi_50)
                
                float eax_121 = var_3c
                i_3 = *(eax_121 i+ 4)
                ebx_11 += 1
                var_3c = eax_121 i+ 4
            
            sub_4c4330("comboBox_numItems", edx_32, &var_3c)
            int32_t var_c_24 = 0x14
            data_30d9508
            sub_5287a0(data_30da528, &var_3c, ebx_11)
            int32_t var_c_25 = 0xffffffff
            sub_4c43d0(&var_3c)
    
    sub_4c42b0(&var_40, "numLayers")
    int32_t var_c_26 = 0x15
    data_30d9508
    int32_t edx_36 = sub_5287a0(0, &var_40, data_30d94f0)
    int32_t var_c_27 = 0xffffffff
    float eax_123 = var_40
    
    if (eax_123 != 0 && *eax_123 != 0)
        void* eax_125 = sub_4c4060(&var_40)
        int32_t temp4_1 = *(eax_125 + 4)
        *(eax_125 + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_53 = *(eax_125 + 0xc) + 0x10
            edx_36 = sub_4f4430(eax_125, sub_4f4380(esi_53), esi_53)
    
    int32_t i_6 = 0
    
    if (data_30d94f0 s> 0)
        int32_t i_4
        
        do
            int32_t i_7 = i_6
            char* const edi_45 = &data_83f3d3
            var_3c = *((i_7 << 3) + &data_30d74f0)
            var_5c = &data_83f3d3
            int32_t j = 0
            int32_t var_c_28 = 0x16
            
            if (*((i_7 << 3) + &data_30d74f4) s> 0)
                do
                    if (edi_45 == 0 || *edi_45 == 0)
                        char* const* var_78_39 = &var_5c
                        sub_4c40c0(1, edx_36)
                        edi_45 = var_5c
                        int16_t* const eax_129 = &data_860fe4
                        edx_36 = edi_45 - &data_860fe4
                        char k
                        
                        do
                            k = *eax_129
                            *(eax_129 + edx_36) = k
                            eax_129 += 1
                        while (k != 0)
                    else
                        if (*(edi_45 - 0x10) != 0xfafafafa)
                            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        int16_t* esi_54 = *(edi_45 - 8)
                        sub_4c4160(esi_54 + 1, edx_36, &var_5c, esi_54 + 1, 1)
                        edx_36.w = 0x20
                        edi_45 = var_5c
                        *(esi_54 + edi_45) = 0x20
                        i_7 = i_6
                    
                    j += 1
                while (j s< *((i_7 << 3) + &data_30d74f4))
            
            char** var_78_40 = &var_58
            sub_4c40c0(9, edx_36)
            char* ebx_12 = var_58
            char const* const eax_131 = "layerName"
            char* const edi_46 = edi_45
            char const j_1
            
            do
                j_1 = *eax_131
                eax_131[ebx_12 - "layerName"] = j_1
                eax_131 = &eax_131[1]
            while (j_1 != 0)
            var_c_28.b = 0x17
            char* const eax_132 = *(var_3c i+ 0x14bc)
            
            if (eax_132 == 0)
                eax_132 = &data_83f3d3
            
            if (edi_46 == 0)
                edi_46 = &data_83f3d3
            
            char* const var_78_41 = eax_132
            char* const var_7c_11 = edi_46
            char** eax_133 = sub_4c4a50(&var_38, "%s%s")
            var_c_28.b = 0x18
            data_30d9508
            edx_36 = sub_528840(i_6, &var_58, eax_133)
            var_c_28.b = 0x17
            float esi_55 = var_38
            
            if (esi_55 != 0 && *esi_55 != 0)
                if (*(esi_55 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp16_1 = *(esi_55 - 0xc)
                *(esi_55 - 0xc) -= 1
                
                if (temp16_1 == 1)
                    void* ebx_13 = data_26a44e4
                    int32_t edi_49 = *(esi_55 - 4) + 0x10
                    
                    if (ebx_13 == 0)
                        sub_4f4250()
                        ebx_13 = data_26a44e4
                    
                    int32_t edx_41 = 0
                    int32_t** ebx_14
                    
                    while (true)
                        if (edi_49 s<= 1 << (edx_41.b + 4))
                            ebx_14 = ebx_13 + edx_41 * 0x14
                            break
                        
                        edx_41 += 1
                        
                        if (edx_41 s>= 7)
                            ebx_14 = ebx_13 + 0x8c
                            break
                    
                    ebx_14[3] -= 1
                    
                    if (edi_49 s<= 0x400 || ebx_14[4] != 0xffffffff)
                        char* eax_135 = ebx_14[4]
                        int32_t* edi_50 = ebx_14[1]
                        char* edx_43 = ebx_14[2] * eax_135
                        var_44 = eax_135
                        var_4c = edx_43
                        
                        if (edi_50 == 0)
                        label_52d620:
                            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        while (true)
                            int32_t* eax_140 = *edi_50
                            void* ecx_34 = &edi_50[1]
                            int32_t* var_48_2 = eax_140
                            edi_50 = eax_140
                            
                            if (esi_55 - 0x10 u>= ecx_34 && esi_55 - 0x10 u< edx_43 + ecx_34)
                                edx_36 = mods.dp.d(sx.q(esi_55 - 0x10 - ecx_34), var_44)
                                
                                if (edx_36 == 0)
                                    *(esi_55 - 0x10) = *ebx_14
                                    *ebx_14 = esi_55 - 0x10
                                    break
                                
                                eax_140 = edi_50
                            
                            if (eax_140 == 0)
                                goto label_52d620
                            
                            edx_43 = var_4c
                    else
                        edx_36 = _aligned_free_base(esi_55 - 0x10)
                    
                    ebx_12 = var_58
            
            var_c_28.b = 0x16
            
            if (ebx_12 != 0 && *ebx_12 != 0)
                if (*(ebx_12 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp17_1 = *(ebx_12 - 0xc)
                *(ebx_12 - 0xc) -= 1
                
                if (temp17_1 == 1)
                    int32_t edi_52 = *(ebx_12 - 4) + 0x10
                    
                    if (data_26a44e4 == 0)
                        sub_4f4250()
                    
                    int32_t edx_46 = 0
                    void** ebx_16
                    
                    while (true)
                        if (edi_52 s<= 1 << (edx_46.b + 4))
                            ebx_16 = data_26a44e4 + edx_46 * 0x14
                            break
                        
                        edx_46 += 1
                        
                        if (edx_46 s>= 7)
                            ebx_16 = data_26a44e4 + 0x8c
                            break
                    
                    ebx_16[3] -= 1
                    
                    if (edi_52 s<= 0x400 || ebx_16[4] != 0xffffffff)
                        char* eax_143 = ebx_16[4]
                        int32_t* edi_53 = ebx_16[1]
                        char* edx_49 = ebx_16[2] * eax_143
                        var_44 = eax_143
                        var_4c = edx_49
                        
                        if (edi_53 == 0)
                        label_52d681:
                            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        while (true)
                            int32_t* eax_148 = *edi_53
                            void* ecx_37 = &edi_53[1]
                            int32_t* var_48_3 = eax_148
                            edi_53 = eax_148
                            
                            if (&ebx_12[0xfffffff0] u>= ecx_37
                                    && &ebx_12[0xfffffff0] u< edx_49 + ecx_37)
                                edx_36 = mods.dp.d(sx.q(&ebx_12[0xfffffff0] - ecx_37), var_44)
                                
                                if (edx_36 == 0)
                                    *(ebx_12 - 0x10) = *ebx_16
                                    *ebx_16 = &ebx_12[0xfffffff0]
                                    break
                                
                                eax_148 = edi_53
                            
                            if (eax_148 == 0)
                                goto label_52d681
                            
                            edx_49 = var_4c
                    else
                        edx_36 = _aligned_free_base(&ebx_12[0xfffffff0])
            
            int32_t ecx_38 = data_30da51c
            int32_t eax_150 = 0
            
            if (ecx_38 s> 0)
                edx_36 = *(var_3c i+ 4)
                
                do
                    if (edx_36 == (&data_30d951c)[eax_150])
                        float* var_78_44 = &var_40
                        sub_4c40c0(0xe, edx_36)
                        float esi_58 = var_40
                        char const* const eax_151 = "layer_selected"
                        int32_t ecx_39
                        
                        do
                            ecx_39.b = *eax_151
                            *(eax_151 + esi_58 i- "layer_selected") = ecx_39.b
                            eax_151 = &eax_151[1]
                        while (ecx_39.b != 0)
                        
                        var_c_28.b = 0x19
                        int32_t* edx_55 = data_30d9508
                        float* var_78_45 = &var_40
                        edx_36 = sub_528650(sub_530500(ecx_39, edx_55), i_6, edx_55)
                        var_c_28.b = 0x16
                        
                        if (esi_58 != 0 && *esi_58 != 0)
                            if (*(esi_58 - 0x10) != 0xfafafafa)
                                sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                                    &data_83f3d3, "xString.cpp", 0x20, 
                                    "XStringMagicDataStructFromCharPtr")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            int32_t temp21_1 = *(esi_58 - 0xc)
                            *(esi_58 - 0xc) -= 1
                            
                            if (temp21_1 == 1)
                                int32_t edi_56 = *(esi_58 - 4) + 0x10
                                
                                if (data_26a44e4 == 0)
                                    sub_4f4250()
                                
                                int32_t edx_56 = 0
                                int32_t* ebx_18
                                
                                while (true)
                                    if (edi_56 s<= 1 << (edx_56.b + 4))
                                        ebx_18 = data_26a44e4 + edx_56 * 0x14
                                        break
                                    
                                    edx_56 += 1
                                    
                                    if (edx_56 s>= 7)
                                        ebx_18 = data_26a44e4 + 0x8c
                                        break
                                
                                ebx_18[3] -= 1
                                
                                if (edi_56 s<= 0x400 || ebx_18[4] != 0xffffffff)
                                    float eax_155 = ebx_18[4]
                                    char* edi_57 = ebx_18[1]
                                    void* edx_59 = ebx_18[2] i* eax_155
                                    var_3c = eax_155
                                    void* var_48_4 = edx_59
                                    
                                    if (edi_57 == 0)
                                    label_52d6e2:
                                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    while (true)
                                        char* eax_160 = *edi_57
                                        void* ecx_41 = &edi_57[4]
                                        var_44 = eax_160
                                        edi_57 = eax_160
                                        
                                        if (esi_58 - 0x10 u>= ecx_41
                                                && esi_58 - 0x10 u< edx_59 + ecx_41)
                                            edx_36 = mods.dp.d(sx.q(esi_58 - 0x10 - ecx_41), var_3c)
                                            
                                            if (edx_36 == 0)
                                                *(esi_58 - 0x10) = *ebx_18
                                                *ebx_18 = esi_58 - 0x10
                                                break
                                            
                                            eax_160 = edi_57
                                        
                                        if (eax_160 == 0)
                                            goto label_52d6e2
                                        
                                        edx_59 = var_48_4
                                else
                                    edx_36 = _aligned_free_base(esi_58 - 0x10)
                        
                        break
                    
                    eax_150 += 1
                while (eax_150 s< ecx_38)
            
            int32_t var_c_29 = 0xffffffff
            char* const esi_60 = var_5c
            
            if (esi_60 != 0 && *esi_60 != 0)
                if (*(esi_60 - 0x10) != 0xfafafafa)
                    sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", 
                        &data_83f3d3, "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t temp20_1 = *(esi_60 - 0xc)
                *(esi_60 - 0xc) -= 1
                
                if (temp20_1 == 1)
                    int32_t edi_59 = *(esi_60 - 4) + 0x10
                    
                    if (data_26a44e4 == 0)
                        sub_4f4250()
                    
                    int32_t edx_62 = 0
                    void** ebx_20
                    
                    while (true)
                        if (edi_59 s<= 1 << (edx_62.b + 4))
                            ebx_20 = data_26a44e4 + edx_62 * 0x14
                            break
                        
                        edx_62 += 1
                        
                        if (edx_62 s>= 7)
                            ebx_20 = data_26a44e4 + 0x8c
                            break
                    
                    ebx_20[3] -= 1
                    
                    if (edi_59 s<= 0x400 || ebx_20[4] != 0xffffffff)
                        float eax_163 = ebx_20[4]
                        char* edi_60 = ebx_20[1]
                        void* edx_65 = ebx_20[2] i* eax_163
                        var_3c = eax_163
                        void* var_48_5 = edx_65
                        
                        if (edi_60 == 0)
                        label_52d743:
                            sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                                "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        while (true)
                            char* eax_168 = *edi_60
                            void* ecx_44 = &edi_60[4]
                            var_44 = eax_168
                            edi_60 = eax_168
                            
                            if (&esi_60[0xfffffff0] u>= ecx_44
                                    && &esi_60[0xfffffff0] u< edx_65 + ecx_44)
                                edx_36 = mods.dp.d(sx.q(&esi_60[0xfffffff0] - ecx_44), var_3c)
                                
                                if (edx_36 == 0)
                                    *(esi_60 - 0x10) = *ebx_20
                                    *ebx_20 = &esi_60[0xfffffff0]
                                    break
                                
                                eax_168 = edi_60
                            
                            if (eax_168 == 0)
                                goto label_52d743
                            
                            edx_65 = var_48_5
                    else
                        edx_36 = _aligned_free_base(&esi_60[0xfffffff0])
            
            i_4 = i_6 + 1
            i_6 = i_4
        while (i_4 s< data_30d94f0)
    
    float* var_78_48 = &var_3c
    sub_4c40c0(8, edx_36)
    float esi_62 = var_3c
    char const* const eax_171 = "filename"
    char const i_5
    
    do
        i_5 = *eax_171
        *(esi_62 i- "filename" + eax_171) = i_5
        eax_171 = &eax_171[1]
    while (i_5 != 0)
    int32_t var_c_30 = 0x1a
    data_30d9508
    int32_t ecx_45 = sub_528840(0, &var_3c, data_30d74e8 + 0x20)
    int32_t var_c_31 = 0xffffffff
    
    if (esi_62 != 0 && *esi_62 != 0)
        if (*(esi_62 - 0x10) != 0xfafafafa)
            sub_4c5870("pStringData->mXStringMagicNumber == XSTRING_MAGIC_NUMBER", &data_83f3d3, 
                "xString.cpp", 0x20, "XStringMagicDataStructFromCharPtr")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t temp11_1 = *(esi_62 - 0xc)
        *(esi_62 - 0xc) -= 1
        
        if (temp11_1 == 1)
            void* edx_73 = data_26a44e4
            int32_t esi_64 = *(esi_62 - 4) + 0x10
            
            if (edx_73 == 0)
                sub_4f4250()
                edx_73 = data_26a44e4
            
            int32_t eax_182 = 0
            int32_t* edi_63
            
            while (true)
                if (esi_64 s<= 1 << (eax_182.b + 4))
                    edi_63 = edx_73 + eax_182 * 0x14
                    break
                
                eax_182 += 1
                
                if (eax_182 s>= 7)
                    edi_63 = edx_73 + 0x8c
                    break
            
            ecx_45 = sub_4f4430(esi_62 - 0x10, edi_63, esi_64)
    
    data_30d9508
    int32_t var_78_51 = ecx_45
    float var_78_52 = fconvert.s(fconvert.t(data_8c4d34))
    sub_5273f0()
    int80_t result
    float* edi_64
    
    if (data_30da524 != 0 || data_30da525:1.b != 0)
        sub_4c6230(&var_38)
        float var_78_55 = var_34
        float var_7c_14 = var_38
        int32_t eax_190 = sub_529dc0()
        
        if (eax_190 == 0xffffffff)
        label_52d912:
            edi_64 = &var_38
        label_52d916:
            char eax_193
            int80_t result_5
            result_5, eax_193 = sub_4c6230(edi_64)
            result = result_5
            
            if (eax_193 != 0)
                SetCursor(LoadCursorA(nullptr, 0x7f00))
        else
            if (eax_190 u> 7)
                sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x14cf, "UI2EditorUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (eax_190)
                case 0, 7
                label_52d821:
                    char eax_186
                    int80_t result_1
                    result_1, eax_186 = sub_4c6230(&var_38)
                    result = result_1
                    
                    if (eax_186 != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f82))
                case 1, 6
                label_52d8d0:
                    char eax_191
                    int80_t result_4
                    result_4, eax_191 = sub_4c6230(&var_38)
                    result = result_4
                    
                    if (eax_191 != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f84))
                case 2, 5
                label_52d83c:
                    char eax_187
                    int80_t result_2
                    result_2, eax_187 = sub_4c6230(&var_38)
                    result = result_2
                    
                    if (eax_187 != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f83))
                case 3, 4
                label_52d857:
                    char eax_188
                    int80_t result_3
                    result_3, eax_188 = sub_4c6230(&var_38)
                    result = result_3
                    
                    if (eax_188 != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f85))
    else
        edi_64 = &var_38
        
        if (data_30da525.b == 0)
            goto label_52d916
        
        sub_4c6230(edi_64)
        float var_78_53 = var_34
        float var_7c_13 = var_38
        int32_t eax_185 = sub_52a430()
        
        if (eax_185 == 0xffffffff)
            goto label_52d912
        
        if (eax_185 u> 7)
            sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x14f5, "UI2EditorUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (eax_185)
            case 0, 7
                goto label_52d821
            case 1, 6
                goto label_52d8d0
            case 2, 5
                goto label_52d83c
            case 3, 4
                goto label_52d857
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
