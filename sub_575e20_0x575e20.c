// 函数名称: sub_575e20
// 虚拟地址: 0x575e20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_575e20()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69851e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_164
    int32_t eax_2 = __security_cookie ^ &var_164
    int32_t __saved_edi
    int32_t var_174 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    float var_e0[0x8]
    float* eax_5 = sub_575ca0(&var_e0)
    bool cond:0 = data_273bc31:1.b == 0
    int32_t var_80[0x2]
    int32_t ecx = __builtin_memcpy(&var_80, eax_5, 0x40)
    
    if (cond:0)
        void* ebx = data_bec2d8
        
        if (ebx != 0xffffffff)
            int32_t eax_12
            eax_12, ecx = sub_4fc3d0(&data_be1cb8, data_273ac24)
            int128_t* eax_13 = sub_4f6e90(ebx, eax_12, &data_83f3d3)
            *eax_13 += 1
            data_bec2d8 = 0xffffffff
    else
        if (data_273bc2c != 1)
            sub_4c5870("gUI.s.activeSetCount == 1", &data_83f3d3, "Editor\UIEditor.cpp", 0x173, 
                "UIEditorDraw")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_7
        int32_t edx_1
        eax_7, edx_1 = sub_575bb0(data_273ac2c)
        int32_t eax_8 = data_bec2d8
        
        if (eax_7 != eax_8 && eax_8 != 0xffffffff)
            int32_t var_178_1 = eax_8
            sub_4f9390(data_273ac24, edx_1)
            data_bec2d8 = 0xffffffff
        
        int128_t* eax_11 = sub_4f6e90(eax_7, sub_4fc3d0(&data_be1cb8, data_273ac24), &data_83f3d3)
        ecx = *eax_11 + 1
        *(eax_11 + 0x13c) = ecx
        eax_11[0x14].d = sub_575dc0
        data_bec2d8 = eax_7
    
    int32_t var_178_2 = ecx
    float var_178_3 = fconvert.s(float.t(1))
    sub_4f9fe0(data_273ac24, &var_80)
    int32_t* eax_15 = sub_4f4890(data_273ac20)
    int32_t i_6 = 0
    float var_160
    float var_150
    char var_148
    float var_130
    float var_a0
    float var_90
    
    if (eax_15[1] s> 0)
        int32_t ecx_2 = data_273bc2c
        int32_t var_140_1 = 0
        int32_t i
        
        do
            int32_t* esi_8 = *eax_15 + var_140_1
            int32_t eax_16 = 0
            
            if (ecx_2 s> 0)
                do
                    if ((&data_273ac2c)[eax_16] == *esi_8)
                        int32_t* eax_18 = sub_4f4990(&var_130, &var_80, &esi_8[7], &var_130, &var_80)
                        int32_t edx_4 = eax_18[1]
                        var_160 = *eax_18
                        int32_t var_15c_1 = edx_4
                        int32_t var_158_1 = eax_18[2]
                        int32_t var_154_1 = eax_18[3]
                        sub_4fc810(&var_90, &esi_8[0x1d], &var_160)
                        var_a0 = var_90
                        float var_88
                        float ecx_8 = var_88
                        int32_t var_8c
                        int32_t var_9c_1 = var_8c
                        float var_98_1 = ecx_8
                        int32_t var_84
                        int32_t var_94_1 = var_84
                        int32_t* esi_9
                        
                        if (data_273ac2c != *esi_8)
                            esi_9 = &data_840bd4
                        else
                            var_148 = 0xf6
                            int16_t var_147_1 = 0x62cb
                            char var_145_1 = 0xff
                            ecx_8 = var_148.d
                            var_150 = ecx_8
                            esi_9 = &var_150
                        
                        float var_178_5 = ecx_8
                        sub_4da250(&var_a0, esi_9, fconvert.s(float.t(1)))
                        ecx_2 = data_273bc2c
                        break
                    
                    eax_16 += 1
                while (eax_16 s< ecx_2)
            
            var_140_1 += 0x118
            i = i_6 + 1
            i_6 = i
        while (i s< eax_15[1])
    
    long double x87_r7_2 = fconvert.t(eax_15[3])
    var_148 = 0
    var_150 = fconvert.s(x87_r7_2)
    int16_t var_147_2 = 0
    long double x87_r7_3 = fconvert.t(-10000f)
    char var_145_2 = 0x7f
    var_160 = fconvert.s(x87_r7_3)
    float var_15c_2 = fconvert.s(x87_r7_3)
    long double x87_r6 = fconvert.t(10000f)
    float var_158_2 = fconvert.s(x87_r6)
    var_148.d = var_148.d
    float var_154_2 = fconvert.s(fconvert.t(var_150))
    var_a0 = var_160
    var_150 = fconvert.s(fconvert.t(eax_15[5]))
    float var_9c_2 = var_15c_2
    float var_98_2 = var_158_2
    var_160 = fconvert.s(x87_r7_3)
    float var_94_2 = var_154_2
    float var_15c_3 = fconvert.s(fconvert.t(var_150))
    float var_30 = var_160
    float var_158_3 = fconvert.s(x87_r6)
    float var_154_3 = fconvert.s(x87_r6)
    float var_2c = var_15c_3
    var_150 = fconvert.s(fconvert.t(eax_15[3]))
    float var_28 = var_158_3
    float var_24 = var_154_3
    float var_138 = fconvert.s(fconvert.t(eax_15[2]))
    float var_140_2 = fconvert.s(fconvert.t(eax_15[5]))
    var_160 = fconvert.s(x87_r7_3)
    long double x87_r6_4 = fconvert.t(var_150)
    var_90 = var_160
    float var_8c_1 = fconvert.s(x87_r6_4)
    float var_88_1 = fconvert.s(fconvert.t(var_138))
    float var_84_1 = fconvert.s(fconvert.t(var_140_2))
    var_150 = fconvert.s(fconvert.t(eax_15[4]))
    float var_138_1 = fconvert.s(fconvert.t(eax_15[3]))
    float var_140_3 = fconvert.s(fconvert.t(eax_15[5]))
    var_160 = fconvert.s(fconvert.t(var_150))
    float var_40 = var_160
    float var_3c = fconvert.s(fconvert.t(var_138_1))
    float var_38 = fconvert.s(x87_r6)
    float var_34 = fconvert.s(fconvert.t(var_140_3))
    float* eax_29 = sub_5757f0(&var_130, &var_a0)
    int32_t edx_15 = eax_29[1]
    var_a0 = *eax_29
    int32_t var_9c_3 = edx_15
    int32_t edx_16 = eax_29[3]
    int32_t var_98_3 = eax_29[2]
    int32_t var_94_3 = edx_16
    sub_4da140(&var_148, edx_16, &var_a0, &var_148)
    float* eax_31 = sub_5757f0(&var_130, &var_90)
    int32_t edx_17 = eax_31[1]
    var_a0 = *eax_31
    int32_t var_9c_4 = edx_17
    int32_t edx_18 = eax_31[3]
    int32_t var_98_4 = eax_31[2]
    int32_t var_94_4 = edx_18
    sub_4da140(&var_148, edx_18, &var_a0, &var_148)
    float* eax_33 = sub_5757f0(&var_130, &var_40)
    int32_t edx_19 = eax_33[1]
    var_a0 = *eax_33
    int32_t var_9c_5 = edx_19
    int32_t edx_20 = eax_33[3]
    int32_t var_98_5 = eax_33[2]
    int32_t var_94_5 = edx_20
    sub_4da140(&var_148, edx_20, &var_a0, &var_148)
    float* eax_35 = sub_5757f0(&var_130, &var_30)
    int32_t edx_21 = eax_35[1]
    var_a0 = *eax_35
    int32_t var_9c_6 = edx_21
    int32_t edx_22 = eax_35[3]
    int32_t var_98_6 = eax_35[2]
    int32_t var_94_6 = edx_22
    sub_4da140(&var_148, edx_22, &var_a0, &var_148)
    var_150 = fconvert.s(fconvert.t(-1.0) / fconvert.t(data_27bc43c))
    var_160 = fconvert.s(fconvert.t(-1000f))
    float var_15c_6 = fconvert.s(fconvert.t(var_150))
    var_a0 = var_160
    float var_9c_7 = var_15c_6
    float var_98_7 = fconvert.s(fconvert.t(4000f))
    float var_94_7 = fconvert.s(float.t(0))
    float* eax_38 = sub_5757f0(&var_130, &var_a0)
    int32_t ecx_28 = eax_38[1]
    var_a0 = *eax_38
    int32_t edx_25 = eax_38[2]
    int32_t eax_39 = eax_38[3]
    int32_t var_9c_8 = ecx_28
    int32_t var_98_8 = edx_25
    int32_t var_94_8 = eax_39
    sub_4da140(eax_39, edx_25, &var_a0, &data_840bc4)
    var_160 = fconvert.s(fconvert.t(-1.0) / fconvert.t(data_27bc43c))
    float var_15c_7 = fconvert.s(fconvert.t(-1000f))
    var_a0 = var_160
    float var_9c_9 = var_15c_7
    float var_98_9 = fconvert.s(float.t(0))
    float var_94_9 = fconvert.s(fconvert.t(4000f))
    float var_110[0x4]
    float* eax_41 = sub_5757f0(&var_110, &var_a0)
    int32_t ecx_32 = eax_41[1]
    var_a0 = *eax_41
    int32_t edx_28 = eax_41[2]
    int32_t eax_42 = eax_41[3]
    int32_t var_9c_10 = ecx_32
    int32_t var_98_10 = edx_28
    int32_t var_94_10 = eax_42
    int32_t ecx_34
    int80_t st0_5
    st0_5, ecx_34 = sub_4da140(eax_42, edx_28, &var_a0, &data_840bc4)
    void var_120
    var_7c
    
    if (data_273bc31:1.b == 0)
    label_5768d6:
        
        if (data_273bc30 != 0)
            if (data_273bc2c s<= 0)
                sub_4c5870("gUI.s.activeSetCount > 0", &data_83f3d3, "Editor\UIEditor.cpp", 0x1e3, 
                    "UIEditorDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t var_178_17 = 0
            int32_t var_17c_2 = ecx_34
            void* eax_60
            char edx_37
            eax_60, edx_37 = sub_575c20(data_273ac2c)
            void var_100
            int32_t* eax_62 = sub_4f52e0(&var_80, &var_100, eax_60, edx_37)
            float edx_38 = eax_62[1]
            var_90 = *eax_62
            float var_8c_4 = edx_38
            float edx_39 = eax_62[3]
            int32_t i_1 = 1
            float var_88_4 = eax_62[2]
            float var_84_4 = edx_39
            
            if (data_273bc2c s> 1)
                do
                    char* ecx_43 = data_273ac20
                    int32_t ebx_3 = (&data_273ac2c)[i_1]
                    
                    if (*(ecx_43 + 4) != 0x1e)
                        sub_4c5870("ptr->assetType == ASSET_TYPE_UI", &data_83f3d3, "UIDef.cpp", 0xfd, 
                            "UIDefGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*ecx_43 == 0)
                        sub_520800(eax_62, edx_39.b, ecx_43, 0)
                        
                        if (*ecx_43 == 0)
                            sub_509540(ecx_43)
                    
                    int32_t* ecx_44 = **ecx_43
                    int32_t eax_65 = 0
                    int32_t* edx_40 = nullptr
                    void* esi_20
                    
                    while (true)
                        if (eax_65 s>= ecx_44[1])
                            sub_4c5870("Halt", &data_83f3d3, "Editor\UIEditor.cpp", 0x126, 
                                "FindElement")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        esi_20 = *ecx_44
                        
                        if (*(edx_40 + esi_20) == ebx_3)
                            break
                        
                        eax_65 += 1
                        edx_40 = &edx_40[0x46]
                    
                    void* esi_21 = esi_20 + eax_65 * 0x118
                    int32_t* eax_68 = sub_4f4990(&var_120, &var_80, esi_21 + 0x1c, &var_120, &var_80)
                    float edx_42 = eax_68[1]
                    var_160 = *eax_68
                    long double x87_r6_34 = fconvert.t(var_160)
                    float edx_43 = eax_68[3]
                    long double x87_r7_48 = fconvert.t(eax_68[2]) - x87_r6_34
                    var_40 = fconvert.s(fconvert.t(*(esi_21 + 0x74)) * x87_r7_48 + x87_r6_34)
                    long double x87_r5_22 = fconvert.t(*(esi_21 + 0x7c))
                    var_a0 = var_40
                    float var_98_13 = fconvert.s(x87_r7_48 * x87_r5_22 + x87_r6_34)
                    long double x87_r6_35 = fconvert.t(edx_42)
                    long double x87_r7_52 = fconvert.t(edx_43) - x87_r6_35
                    float var_9c_13 = fconvert.s(fconvert.t(*(esi_21 + 0x78)) * x87_r7_52 + x87_r6_35)
                    float var_94_13 = fconvert.s(x87_r7_52 * fconvert.t(*(esi_21 + 0x80)) + x87_r6_35)
                    float var_f0[0x4]
                    eax_62 = sub_4684b0(&var_90, &var_a0, &var_f0)
                    float edx_46 = eax_62[1]
                    var_90 = *eax_62
                    var_8c_4 = edx_46
                    edx_39 = eax_62[3]
                    i_1 += 1
                    var_88_4 = eax_62[2]
                    var_84_4 = edx_39
                while (i_1 s< data_273bc2c)
            
            long double x87_r7_55 = float.t(0)
            int32_t i_2 = 0
            var_80[0] = fconvert.s(x87_r7_55)
            var_80[1] = fconvert.s(x87_r7_55)
            float var_78_3 = fconvert.s(x87_r7_55)
            long double x87_r6_36 = fconvert.t(0.5f)
            float var_74_3 = fconvert.s(x87_r6_36)
            float var_70_3 = fconvert.s(x87_r7_55)
            long double x87_r5_28 = float.t(1)
            float var_6c_3 = fconvert.s(x87_r5_28)
            float var_5c_3 = fconvert.s(x87_r5_28)
            float var_58_3 = fconvert.s(x87_r5_28)
            float var_50_3 = fconvert.s(x87_r5_28)
            float var_48_3 = fconvert.s(x87_r5_28)
            float var_44_3 = fconvert.s(x87_r5_28)
            float var_68_3 = fconvert.s(x87_r6_36)
            float var_60_3 = fconvert.s(x87_r6_36)
            float var_4c_3 = fconvert.s(x87_r6_36)
            float var_64_3 = fconvert.s(x87_r7_55)
            float var_54_3 = fconvert.s(x87_r7_55)
            var_30.q = fconvert.d(fconvert.t(var_88_4) - fconvert.t(var_90))
            var_148.q = fconvert.d(fconvert.t(var_84_4) - fconvert.t(var_8c_4))
            
            do
                long double x87_r7_62 = fconvert.t(4.0)
                var_150 = fconvert.s(fconvert.t((&var_80)[i_2][0]) * fconvert.t(var_30.q)
                    + fconvert.t(var_90))
                long double x87_r6_45 = fconvert.t(var_150)
                float var_140_6 = fconvert.s(x87_r6_45 + x87_r7_62)
                long double x87_r5_31 = fconvert.t(fconvert.s(
                    fconvert.t(*(&var_7c + (i_2 << 3))) * fconvert.t(var_148.q) + fconvert.t(var_8c_4)))
                float var_13c_3 = fconvert.s(x87_r5_31 + x87_r7_62)
                float var_134_3 = fconvert.s(x87_r5_31 - x87_r7_62)
                var_160 = fconvert.s(fconvert.t(fconvert.s(x87_r6_45 - x87_r7_62)))
                var_a0 = var_160
                float var_15c_11 = fconvert.s(fconvert.t(var_134_3))
                float var_178_19 = var_15c_11
                float var_9c_14 = var_15c_11
                float var_94_14 = fconvert.s(fconvert.t(var_13c_3))
                float var_98_14 = fconvert.s(fconvert.t(var_140_6))
                sub_4da250(&var_a0, &data_840b50, fconvert.s(fconvert.t(2f)))
                i_2 += 1
            while (i_2 s< 8)
        else if (data_273bc31.b != 0)
            void* eax_76 = sub_4f4890(data_273ac20)
            long double x87_r7_69 = float.t(0)
            var_80[0] = fconvert.s(x87_r7_69)
            float ecx_53 = *(eax_76 + 8)
            var_80[1] = fconvert.s(x87_r7_69)
            float edx_48 = *(eax_76 + 0xc)
            float var_78_4 = fconvert.s(x87_r7_69)
            var_160 = ecx_53
            long double x87_r6_47 = fconvert.t(0.5f)
            float var_74_4 = fconvert.s(x87_r6_47)
            float var_70_4 = fconvert.s(x87_r7_69)
            long double x87_r5_34 = float.t(1)
            float var_6c_4 = fconvert.s(x87_r5_34)
            int32_t i_3 = 0
            float var_5c_4 = fconvert.s(x87_r5_34)
            float var_58_4 = fconvert.s(x87_r5_34)
            float var_50_4 = fconvert.s(x87_r5_34)
            float var_48_4 = fconvert.s(x87_r5_34)
            float var_44_4 = fconvert.s(x87_r5_34)
            float var_68_4 = fconvert.s(x87_r6_47)
            float var_60_4 = fconvert.s(x87_r6_47)
            float var_4c_4 = fconvert.s(x87_r6_47)
            float var_64_4 = fconvert.s(x87_r7_69)
            float var_54_4 = fconvert.s(x87_r7_69)
            var_40.q = fconvert.d(fconvert.t(*(eax_76 + 0x10)) - fconvert.t(var_160))
            var_90.q = fconvert.d(fconvert.t(*(eax_76 + 0x14)) - fconvert.t(edx_48))
            
            do
                long double x87_r7_76 = fconvert.t(4.0)
                var_150 = fconvert.s(fconvert.t((&var_80)[i_3][0]) * fconvert.t(var_40.q)
                    + fconvert.t(var_160))
                long double x87_r5_35 = fconvert.t(data_27bc43c)
                float var_13c_4 = fconvert.s(x87_r5_35 * fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                    fconvert.t(*(&var_7c + (i_3 << 3))) * fconvert.t(var_90.q) + fconvert.t(edx_48)))
                    - fconvert.t(data_27bc444))))
                long double x87_r6_64 = fconvert.t(fconvert.s(
                    fconvert.t(fconvert.s(fconvert.t(var_150) - fconvert.t(data_27bc440))) * x87_r5_35))
                var_30 = fconvert.s(x87_r6_64 + x87_r7_76)
                long double x87_r5_39 = fconvert.t(var_13c_4)
                float var_2c_1 = fconvert.s(x87_r5_39 + x87_r7_76)
                var_148.d = fconvert.s(x87_r6_64 - x87_r7_76)
                float var_144_1 = fconvert.s(x87_r5_39 - x87_r7_76)
                var_a0 = fconvert.s(fconvert.t(var_148.d))
                var_130 = var_a0
                float var_9c_15 = fconvert.s(fconvert.t(var_144_1))
                float var_178_21 = var_9c_15
                float var_12c_1 = var_9c_15
                float var_124_1 = fconvert.s(fconvert.t(var_2c_1))
                float var_128_1 = fconvert.s(fconvert.t(var_30))
                sub_4da250(&var_130, &data_840b50, fconvert.s(fconvert.t(2f)))
                i_3 += 1
            while (i_3 s< 8)
    else
        ecx_34 = 0x8000
        
        if ((0x8000 & GetKeyState(0x11)) != 0)
            if (data_273bc31:1.b == 0)
                goto label_5768d6
            
            int16_t eax_51
            eax_51, ecx_34 = GetKeyState(0x11)
            
            if ((0x8000 & eax_51) == 0)
                goto label_5768d6
            
            if (data_273bc2c != 1)
                sub_4c5870("gUI.s.activeSetCount == 1", &data_83f3d3, "Editor\UIEditor.cpp", 0x1c9, 
                    "UIEditorDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* eax_53
            char edx_33
            eax_53, edx_33 = sub_575c20(data_273ac2c)
            int32_t var_178_14 = 1
            int32_t* eax_55 = sub_4f52e0(&var_80, &var_120, eax_53, edx_33)
            long double x87_r7_33 = float.t(0)
            var_80[0] = fconvert.s(x87_r7_33)
            float ecx_38 = *eax_55
            var_80[1] = fconvert.s(x87_r7_33)
            float edx_34 = eax_55[1]
            float var_78_2 = fconvert.s(x87_r7_33)
            var_90 = ecx_38
            long double x87_r6_23 = fconvert.t(0.5f)
            float var_74_2 = fconvert.s(x87_r6_23)
            float var_70_2 = fconvert.s(x87_r7_33)
            long double x87_r5_12 = float.t(1)
            float var_6c_2 = fconvert.s(x87_r5_12)
            float var_5c_2 = fconvert.s(x87_r5_12)
            int32_t i_4 = 0
            float var_58_2 = fconvert.s(x87_r5_12)
            float var_50_2 = fconvert.s(x87_r5_12)
            float var_48_2 = fconvert.s(x87_r5_12)
            float var_44_2 = fconvert.s(x87_r5_12)
            float var_68_2 = fconvert.s(x87_r6_23)
            float var_60_2 = fconvert.s(x87_r6_23)
            float var_4c_2 = fconvert.s(x87_r6_23)
            float var_64_2 = fconvert.s(x87_r7_33)
            float var_54_2 = fconvert.s(x87_r7_33)
            var_30.q = fconvert.d(fconvert.t(eax_55[2]) - fconvert.t(var_90))
            var_148.q = fconvert.d(fconvert.t(eax_55[3]) - fconvert.t(edx_34))
            
            do
                long double x87_r7_40 = fconvert.t(4.0)
                var_150 = fconvert.s(fconvert.t((&var_80)[i_4][0]) * fconvert.t(var_30.q)
                    + fconvert.t(var_90))
                long double x87_r6_32 = fconvert.t(var_150)
                float var_140_5 = fconvert.s(x87_r6_32 + x87_r7_40)
                long double x87_r5_15 = fconvert.t(fconvert.s(
                    fconvert.t(*(&var_7c + (i_4 << 3))) * fconvert.t(var_148.q) + fconvert.t(edx_34)))
                float var_13c_2 = fconvert.s(x87_r5_15 + x87_r7_40)
                float var_134_2 = fconvert.s(x87_r5_15 - x87_r7_40)
                var_160 = fconvert.s(fconvert.t(fconvert.s(x87_r6_32 - x87_r7_40)))
                var_a0 = var_160
                float var_15c_9 = fconvert.s(fconvert.t(var_134_2))
                float var_178_15 = var_15c_9
                float var_9c_12 = var_15c_9
                float var_94_12 = fconvert.s(fconvert.t(var_13c_2))
                float var_98_12 = fconvert.s(fconvert.t(var_140_5))
                sub_4da250(&var_a0, &data_840b50, fconvert.s(fconvert.t(2f)))
                i_4 += 1
            while (i_4 s< 8)
        else
            if (data_273bc2c != 1)
                sub_4c5870("gUI.s.activeSetCount == 1", &data_83f3d3, "Editor\UIEditor.cpp", 0x1af, 
                    "UIEditorDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* eax_45
            char edx_29
            eax_45, edx_29 = sub_575c20(data_273ac2c)
            int32_t var_178_11 = 0
            int32_t* eax_47 = sub_4f52e0(&var_80, &var_40, eax_45, edx_29)
            long double x87_r7_19 = float.t(0)
            var_80[0] = fconvert.s(x87_r7_19)
            float edx_30 = *eax_47
            var_80[1] = fconvert.s(x87_r7_19)
            float ecx_35 = eax_47[1]
            float var_78_1 = fconvert.s(x87_r7_19)
            var_90 = edx_30
            long double x87_r6_12 = fconvert.t(0.5f)
            float var_74_1 = fconvert.s(x87_r6_12)
            float var_70_1 = fconvert.s(x87_r7_19)
            long double x87_r5_6 = float.t(1)
            float var_6c_1 = fconvert.s(x87_r5_6)
            float var_5c_1 = fconvert.s(x87_r5_6)
            int32_t i_5 = 0
            float var_58_1 = fconvert.s(x87_r5_6)
            float var_50_1 = fconvert.s(x87_r5_6)
            float var_48_1 = fconvert.s(x87_r5_6)
            float var_44_1 = fconvert.s(x87_r5_6)
            float var_68_1 = fconvert.s(x87_r6_12)
            float var_60_1 = fconvert.s(x87_r6_12)
            float var_4c_1 = fconvert.s(x87_r6_12)
            float var_64_1 = fconvert.s(x87_r7_19)
            float var_54_1 = fconvert.s(x87_r7_19)
            var_30.q = fconvert.d(fconvert.t(eax_47[2]) - fconvert.t(var_90))
            var_148.q = fconvert.d(fconvert.t(eax_47[3]) - fconvert.t(ecx_35))
            
            do
                long double x87_r7_26 = fconvert.t(4.0)
                var_150 = fconvert.s(fconvert.t((&var_80)[i_5][0]) * fconvert.t(var_30.q)
                    + fconvert.t(var_90))
                long double x87_r6_21 = fconvert.t(var_150)
                float var_140_4 = fconvert.s(x87_r6_21 + x87_r7_26)
                long double x87_r5_9 = fconvert.t(fconvert.s(
                    fconvert.t(*(&var_7c + (i_5 << 3))) * fconvert.t(var_148.q) + fconvert.t(ecx_35)))
                float var_13c_1 = fconvert.s(x87_r5_9 + x87_r7_26)
                float var_134_1 = fconvert.s(x87_r5_9 - x87_r7_26)
                var_160 = fconvert.s(fconvert.t(fconvert.s(x87_r6_21 - x87_r7_26)))
                var_a0 = var_160
                float var_9c_11 = fconvert.s(fconvert.t(var_134_1))
                float var_98_11 = fconvert.s(fconvert.t(var_140_4))
                float var_154_8 = fconvert.s(fconvert.t(var_13c_1))
                float var_178_12 = var_154_8
                float var_94_11 = var_154_8
                sub_4da250(&var_a0, &data_840b50, fconvert.s(fconvert.t(2f)))
                i_5 += 1
            while (i_5 s< 8)
    float eax_80 = *(data_273ac20 + 0x20)
    float esi_24 = &data_83f3d3
    
    if (eax_80 != 0)
        esi_24 = eax_80
    
    if ((data_31666c8 & 1) == 0)
        data_31666c8.d |= 1
        int32_t var_c_1 = 0
        data_31666c4 = sub_509140(0x12, "sys/debugfont.font")
        int32_t var_c_2 = 0xffffffff
    
    long double x87_r7_83 = float.t(0)
    void* eax_82 = data_27e7fd0
    data_31666c4
    var_a0 = fconvert.s(x87_r7_83)
    float var_9c_16 = fconvert.s(x87_r7_83)
    long double x87_r7_84 = float.t(*(eax_82 + 0x14))
    var_130 = var_a0
    float var_98_16 = fconvert.s(x87_r7_84)
    float var_178_23 = var_98_16
    float var_12c_2 = var_9c_16
    void* edx_52 = fconvert.s(float.t(*(eax_82 + 0x18)))
    float var_178_24 = fconvert.s(fconvert.t(1.5f))
    float var_128_2 = var_98_16
    void* var_124_2 = edx_52
    int80_t result = sub_4cae70(7, &var_130, edx_52, esi_24)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_164)
    return result
}
