// 函数名称: sub_52bc50
// 虚拟地址: 0x52bc50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_52bc50(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_691f60
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_edi
    int32_t eax_2 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t edx = data_315f6a8
    int32_t var_1c = 0
    int32_t ecx
    
    if (edx != 0 && *arg1 != edx)
        ecx = sub_52b650()
        sub_52b9d0(data_315f6a8)
        data_315f6a8 = 0
    
    void* eax_4
    int32_t ecx_1
    eax_4, ecx_1 = sub_530500(ecx, *arg1)
    
    if (*(eax_4 + 0x14c0) == 3 && *(sub_530500(ecx_1, *arg1) + 0x1580) != 0)
        data_315f6a8 = *arg1
    
    char* var_20
    sub_4c42b0(&var_20, "propertyItemEdit_click")
    char* esi_1 = var_20
    char* ecx_3 = arg1[1]
    char* const eax_6 = &data_83f3d3
    
    if (esi_1 != 0)
        eax_6 = esi_1
    
    int32_t eax_8
    
    while (true)
        char edx_3 = *eax_6
        char temp0_1 = *ecx_3
        bool c_1 = edx_3 u< temp0_1
        
        if (edx_3 == temp0_1)
            if (edx_3 == 0)
                eax_8 = 0
                break
            
            edx_3 = eax_6[1]
            char temp3_1 = ecx_3[1]
            c_1 = edx_3 u< temp3_1
            
            if (edx_3 == temp3_1)
                eax_6 = &eax_6[2]
                ecx_3 = &ecx_3[2]
                
                if (edx_3 != 0)
                    continue
                
                eax_8 = 0
                break
        
        bool c_2 = unimplemented  {sbb eax, eax}
        eax_8 = sbb.d(sbb.d(eax_6, eax_6, c_1), 0xffffffff, c_2)
        break
    
    int32_t* i_2
    
    if (eax_8 != 0 || data_30da51c s<= eax_8)
        i_2.b = 0
    else
        i_2.b = 1
    
    if (esi_1 != 0 && *esi_1 != 0)
        void* eax_10 = sub_4c4060(&var_20)
        int32_t temp4_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp4_1 == 1)
            int32_t esi_3 = *(eax_10 + 0xc) + 0x10
            sub_4f4430(eax_10, sub_4f4380(esi_3), esi_3)
    
    if (i_2.b != 0)
        data_30da528 = arg1[2]
    
    sub_4c42b0(&var_20, "layerItem_click")
    char* esi_5 = var_20
    char* ecx_6 = arg1[1]
    char* const eax_14 = &data_83f3d3
    
    if (esi_5 != 0)
        eax_14 = esi_5
    
    int32_t eax_16
    
    while (true)
        char edx_5 = *eax_14
        char temp5_1 = *ecx_6
        bool c_3 = edx_5 u< temp5_1
        
        if (edx_5 == temp5_1)
            if (edx_5 == 0)
                eax_16 = 0
                break
            
            edx_5 = eax_14[1]
            char temp8_1 = ecx_6[1]
            c_3 = edx_5 u< temp8_1
            
            if (edx_5 == temp8_1)
                eax_14 = &eax_14[2]
                ecx_6 = &ecx_6[2]
                
                if (edx_5 != 0)
                    continue
                
                eax_16 = 0
                break
        
        bool c_4 = unimplemented  {sbb eax, eax}
        eax_16 = sbb.d(sbb.d(eax_14, eax_14, c_3), 0xffffffff, c_4)
        break
    
    i_2.b = eax_16 == 0
    
    if (esi_5 != 0 && *esi_5 != 0)
        void* eax_18 = sub_4c4060(&var_20)
        int32_t temp9_1 = *(eax_18 + 4)
        *(eax_18 + 4) -= 1
        
        if (temp9_1 == 1)
            int32_t esi_7 = *(eax_18 + 0xc) + 0x10
            sub_4f4430(eax_18, sub_4f4380(esi_7), esi_7)
    
    if (i_2.b != 0)
        data_30da528 = 0xffffffff
        data_30da52c = 0xffffffff
        int32_t edi_5 = *(*((arg1[2] << 3) + &data_30d74f0) + 0x19dc)
        int16_t eax_22 = GetKeyState(0x11)
        HWND eax_23
        
        if ((0x8000 & eax_22) != 0 && *(data_27e7bbc + 0x18) != 0)
            eax_23 = GetFocus()
        
        if ((0x8000 & eax_22) == 0 || *(data_27e7bbc + 0x18) == 0 || eax_23 != data_30785e0)
            int16_t eax_24 = GetKeyState(0x10)
            int32_t ecx_8 = 0x8000
            HWND eax_25
            
            if ((0x8000 & eax_24) != 0 && *(data_27e7bbc + 0x18) != 0)
                eax_25, ecx_8 = GetFocus()
            
            if ((0x8000 & eax_24) == 0 || *(data_27e7bbc + 0x18) == 0 || eax_25 != data_30785e0
                    || data_30da51c s<= 0)
                sub_52ad60(ecx_8)
            else
                i_2 = arg1[2]
                int32_t* i_1 = data_30da520
                int32_t* i = i_2
                
                if (i_2 s>= i_1)
                    i = i_1
                
                if (i_2 s< i_1 || i_2 s<= i_1)
                    i_2 = i_1
                
                for (; i s<= i_2; i += 1)
                    sub_52b360(*(*((i << 3) + &data_30d74f0) + 0x19dc))
                
                sub_5ab990(&(&data_30d9514)[data_315b330 * 0x407], &data_30d9518, 0x1018, eax_2)
        else
            sub_52b3b0(edi_5)
    
    sub_4c42b0(&var_20, "propertyItem_click")
    char* esi_9 = var_20
    char* ecx_9 = arg1[1]
    char* const eax_31 = &data_83f3d3
    
    if (esi_9 != 0)
        eax_31 = esi_9
    
    int32_t eax_33
    
    while (true)
        char edx_10 = *eax_31
        char temp10_1 = *ecx_9
        bool c_5 = edx_10 u< temp10_1
        
        if (edx_10 == temp10_1)
            if (edx_10 == 0)
                eax_33 = 0
                break
            
            edx_10 = eax_31[1]
            char temp13_1 = ecx_9[1]
            c_5 = edx_10 u< temp13_1
            
            if (edx_10 == temp13_1)
                eax_31 = &eax_31[2]
                ecx_9 = &ecx_9[2]
                
                if (edx_10 != 0)
                    continue
                
                eax_33 = 0
                break
        
        bool c_6 = unimplemented  {sbb eax, eax}
        eax_33 = sbb.d(sbb.d(eax_31, eax_31, c_5), 0xffffffff, c_6)
        break
    
    if (eax_33 != 0 || data_30da51c s<= eax_33)
        i_2.b = 0
    else
        i_2.b = 1
    
    if (esi_9 != 0 && *esi_9 != 0)
        void* eax_35 = sub_4c4060(&var_20)
        int32_t temp14_1 = *(eax_35 + 4)
        *(eax_35 + 4) -= 1
        
        if (temp14_1 == 1)
            int32_t esi_11 = *(eax_35 + 0xc) + 0x10
            sub_4f4430(eax_35, sub_4f4380(esi_11), esi_11)
    
    if (i_2.b != 0)
        data_30da528 = 0xffffffff
        data_30da52c = 0xffffffff
        data_30da528 = arg1[2]
    
    sub_4c42b0(&var_20, "propertyItemComboButton_click")
    char* esi_13 = var_20
    char* ecx_12 = arg1[1]
    char* const eax_39 = &data_83f3d3
    
    if (esi_13 != 0)
        eax_39 = esi_13
    
    int32_t eax_41
    
    while (true)
        char edx_12 = *eax_39
        char temp15_1 = *ecx_12
        bool c_7 = edx_12 u< temp15_1
        
        if (edx_12 == temp15_1)
            if (edx_12 == 0)
                eax_41 = 0
                break
            
            edx_12 = eax_39[1]
            char temp18_1 = ecx_12[1]
            c_7 = edx_12 u< temp18_1
            
            if (edx_12 == temp18_1)
                eax_39 = &eax_39[2]
                ecx_12 = &ecx_12[2]
                
                if (edx_12 != 0)
                    continue
                
                eax_41 = 0
                break
        
        bool c_8 = unimplemented  {sbb eax, eax}
        eax_41 = sbb.d(sbb.d(eax_39, eax_39, c_7), 0xffffffff, c_8)
        break
    
    i_2.b = eax_41 == 0
    
    if (esi_13 != 0 && *esi_13 != 0)
        void* eax_43 = sub_4c4060(&var_20)
        int32_t temp19_1 = *(eax_43 + 4)
        *(eax_43 + 4) -= 1
        
        if (temp19_1 == 1)
            int32_t esi_15 = *(eax_43 + 0xc) + 0x10
            sub_4f4430(eax_43, sub_4f4380(esi_15), esi_15)
    
    if (i_2.b != 0)
        int32_t edx_13 = data_30da52c
        data_30da528 = arg1[2]
        
        if (edx_13 != arg1[2])
            data_30da52c = arg1[2]
        else
            data_30da52c = 0xffffffff
    
    sub_4c42b0(&var_20, "propertyItemFileButton_click")
    char* esi_17 = var_20
    char* ecx_16 = arg1[1]
    char* const eax_48 = &data_83f3d3
    
    if (esi_17 != 0)
        eax_48 = esi_17
    
    int32_t eax_50
    
    while (true)
        char edx_14 = *eax_48
        char temp20_1 = *ecx_16
        bool c_9 = edx_14 u< temp20_1
        
        if (edx_14 == temp20_1)
            if (edx_14 == 0)
                eax_50 = 0
                break
            
            edx_14 = eax_48[1]
            char temp23_1 = ecx_16[1]
            c_9 = edx_14 u< temp23_1
            
            if (edx_14 == temp23_1)
                eax_48 = &eax_48[2]
                ecx_16 = &ecx_16[2]
                
                if (edx_14 != 0)
                    continue
                
                eax_50 = 0
                break
        
        bool c_10 = unimplemented  {sbb eax, eax}
        eax_50 = sbb.d(sbb.d(eax_48, eax_48, c_9), 0xffffffff, c_10)
        break
    
    i_2.b = eax_50 == 0
    
    if (esi_17 != 0 && *esi_17 != 0)
        void* eax_52 = sub_4c4060(&var_20)
        int32_t temp25_1 = *(eax_52 + 4)
        *(eax_52 + 4) -= 1
        
        if (temp25_1 == 1)
            int32_t esi_19 = *(eax_52 + 0xc) + 0x10
            sub_4f4430(eax_52, sub_4f4380(esi_19), esi_19)
    
    if (i_2.b != 0)
        int32_t* eax_56 = sub_528f30(data_30d951c)
        eax_56[0x677]
        int32_t eax_58 = *(sub_52ae50(data_30da528) + 4)
        
        if (eax_58 != 0x76 && eax_58 != 0xc8 && eax_58 != 0xce)
            sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x13de, "UI2EditorClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        char* const var_24 = &data_83f3d3
        int32_t var_c_1 = 0
        
        if (sub_543860() != 0)
            int32_t* eax_64 = sub_521460(*eax_56)
            int32_t ecx_18 = eax_56[1]
            int32_t eax_65 = *eax_64
            char* const ecx_19 = var_24
            
            if (ecx_19 == 0)
                ecx_19 = &data_83f3d3
            
            sub_51ee80(eax_65, &var_20, ecx_19, &var_20)
            var_c_1.b = 1
            char* eax_66 = var_20
            
            if (eax_66 == 0)
                eax_66 = &data_83f3d3
            
            char** eax_67
            int32_t ecx_20
            void* edx_18
            eax_67, ecx_20, edx_18 = sub_543700(eax_66)
            char** var_38_9 = eax_67
            int32_t var_3c_1 = eax_58
            sub_530b60(eax_65 + ecx_18 * 0xc, edx_18, ecx_20, &data_8c00ec)
            sub_528280(1)
            var_c_1.b = 0
            char* eax_70 = var_20
            
            if (eax_70 != 0 && *eax_70 != 0)
                i_2 = sub_4c4060(&var_20)
                int32_t temp34_1 = i_2[1]
                i_2[1] -= 1
                
                if (temp34_1 == 1)
                    int32_t esi_27 = i_2[3] + 0x10
                    sub_4f4430(i_2, sub_4f4380(esi_27), esi_27)
        
        int32_t var_c_2 = 0xffffffff
        
        if (var_24 != 0 && *var_24 != 0)
            i_2 = sub_4c4060(&var_24)
            int32_t temp33_1 = i_2[1]
            i_2[1] -= 1
            
            if (temp33_1 == 1)
                int32_t esi_29 = i_2[3] + 0x10
                sub_4f4430(i_2, sub_4f4380(esi_29), esi_29)
    
    sub_4c42b0(&var_20, "comboBoxItem_click")
    char* esi_31 = var_20
    char* ecx_22 = arg1[1]
    char* eax_79 = &data_83f3d3
    
    if (esi_31 != 0)
        eax_79 = esi_31
    
    void* result
    
    while (true)
        int32_t* edx_19
        edx_19.b = *eax_79
        char temp26_1 = *ecx_22
        bool c_11 = edx_19.b u< temp26_1
        
        if (edx_19.b == temp26_1)
            if (edx_19.b == 0)
                result = nullptr
                break
            
            edx_19.b = eax_79[1]
            char temp31_1 = ecx_22[1]
            c_11 = edx_19.b u< temp31_1
            
            if (edx_19.b == temp31_1)
                eax_79 = &eax_79[2]
                ecx_22 = &ecx_22[2]
                
                if (edx_19.b != 0)
                    continue
                
                result = nullptr
                break
        
        bool c_12 = unimplemented  {sbb eax, eax}
        result = sbb.d(sbb.d(eax_79, eax_79, c_11), 0xffffffff, c_12)
        break
    
    i_2.b = result == 0
    
    if (esi_31 != 0 && *esi_31 != 0)
        result = sub_4c4060(&var_20)
        int32_t temp32_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp32_1 == 1)
            int32_t esi_33 = *(result + 0xc) + 0x10
            result = sub_4f4430(result, sub_4f4380(esi_33), esi_33)
    
    if (i_2.b != 0)
        int32_t* eax_85 = sub_528f30(data_30d951c)
        
        if (data_30da51c s<= 0)
            sub_4c5870("gUI2Editor.s.activeSetCount > 0", &data_83f3d3, "UI2.cpp", 0x13f1, 
                "UI2EditorClick")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        eax_85[0x677]
        char* eax_88 = *(sub_52ae50(data_30da52c) + 4)
        eax_85[0x677]
        int32_t esi_35 = data_30da52c
        var_20 = eax_88
        int32_t eax_90 = *(sub_52ae50(esi_35) + 0xc)
        int32_t* eax_92
        int32_t ecx_25
        
        if (eax_90 != 1)
            if (eax_90 != 4)
                sub_4c5870("Halt", &data_83f3d3, "UI2.cpp", 0x1407, "UI2EditorClick")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t eax_93 = sub_52b1d0(data_30da52c, eax_85[0x677])
            eax_92 = sub_521460(*eax_85)
            ecx_25 = *(eax_93 + (arg1[2] << 2))
        else
            eax_85[0x677]
            data_30da52c
            int32_t eax_91 = sub_52b300()
            eax_92 = sub_521460(*eax_85)
            ecx_25 = *(eax_91 + (arg1[2] << 3))
        
        int32_t var_38_13 = ecx_25
        char* var_3c_2 = var_20
        void* edx_26 = *eax_92
        int32_t ecx_28 = eax_85[1] * 3
        sub_530b60(edx_26 + (ecx_28 << 2), edx_26, ecx_28, &data_8c00ec)
        result = sub_528280(1)
        data_30da52c = 0xffffffff
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
