// 函数名称: sub_52d9a0
// 虚拟地址: 0x52d9a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_52d9a0()
{
    // 第一条实际指令: float var_c0
    float var_c0
    int32_t eax_1 = __security_cookie ^ &var_c0
    int32_t ecx
    char edx
    
    if (data_30d74ec != 0)
        ecx, edx = sub_527b00(&data_30d74ec)
    
    int32_t eax_5 = data_30da51c
    int32_t edi = 1
    
    if (eax_5 s> 1)
        do
            int32_t eax_2 = (&data_30d951c)[edi]
            
            if (eax_2 s< 0)
                sub_4c5870("index >= 0", &data_83f3d3, "UI2.cpp", 0xeb7, "UI2GetIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (eax_2 s>= data_30d94f0)
                sub_4c5870("index < gUI2Editor.numDisplayEls", &data_83f3d3, "UI2.cpp", 0xeb8, 
                    "UI2GetIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t var_cc_1 = ecx
            ecx, edx =
                sub_4da250(*((eax_2 << 3) + &data_30d74f0) + 8, &data_840bd4, fconvert.s(float.t(1)))
            eax_5 = data_30da51c
            edi += 1
        while (edi s< eax_5)
    
    char var_b0
    
    if (eax_5 s> 0)
        int32_t eax_6 = data_30d951c
        
        if (eax_6 s< 0)
            sub_4c5870("index >= 0", &data_83f3d3, "UI2.cpp", 0xeb7, "UI2GetIndex")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (eax_6 s>= data_30d94f0)
            sub_4c5870("index < gUI2Editor.numDisplayEls", &data_83f3d3, "UI2.cpp", 0xeb8, 
                "UI2GetIndex")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_11 = *((eax_6 << 3) + &data_30d74f0)
        var_b0 = 0xf6
        int16_t var_af_1 = 0x62cb
        char var_ad_1 = 0xff
        int32_t ecx_1 = var_b0.d
        int32_t var_cc_3 = ecx_1
        var_b0.d = ecx_1
        eax_5, edx = sub_4da250(eax_11 + 8, &var_b0, fconvert.s(float.t(1)))
    
    int32_t* ecx_2 = data_30d74e8
    
    if (ecx_2[1] != 0x22)
        sub_4c5870("ptr->assetType == ASSET_TYPE_UI2", &data_83f3d3, "UI2.cpp", 0x256, "UI2DefGet")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (*ecx_2 == 0)
        sub_520800(eax_5, edx, ecx_2, 0)
        
        if (*ecx_2 == 0)
            sub_509540(ecx_2)
    
    long double x87_r7_3 = float.t(0)
    float var_bc
    float var_b8
    float var_b4
    float var_80
    
    if (*(**ecx_2 + 4) != 0)
        var_80 = fconvert.s(x87_r7_3)
        float var_7c_1 = fconvert.s(x87_r7_3)
        var_c0 = var_80
        var_bc = var_7c_1
        var_b8 = fconvert.s(fconvert.t(3238f))
        var_b4 = fconvert.s(fconvert.t(2048f))
    else
        var_c0 = 0f
        var_bc = 0f
        var_b8 = 1f
        var_b4 = 1f
    
    long double x87_r7_6 = fconvert.t(-10000f)
    var_b0 = 0
    var_80 = fconvert.s(x87_r7_6)
    float ecx_4 = var_80
    float var_7c_2 = fconvert.s(x87_r7_6)
    long double x87_r6 = fconvert.t(10000f)
    int16_t var_af_2 = 0
    float var_78_2 = fconvert.s(x87_r6)
    char var_ad_2 = 0x7f
    long double x87_r5 = fconvert.t(var_bc)
    float var_74_2 = fconvert.s(x87_r5)
    var_b0.d = var_b0.d
    var_80 = fconvert.s(x87_r7_6)
    float var_90 = ecx_4
    long double x87_r4 = fconvert.t(var_b4)
    float var_7c_3 = fconvert.s(x87_r4)
    float var_8c = var_7c_2
    float edx_5 = var_80
    float var_78_3 = fconvert.s(x87_r6)
    float var_88 = var_78_2
    float var_74_3 = fconvert.s(x87_r6)
    float var_84 = var_74_2
    var_80 = fconvert.s(x87_r7_6)
    float var_70 = edx_5
    float var_7c_4 = fconvert.s(x87_r5)
    float var_6c = var_7c_3
    float eax_20 = var_80
    float var_78_4 = fconvert.s(fconvert.t(var_c0))
    float var_68 = var_78_3
    float var_74_4 = fconvert.s(x87_r4)
    float var_64 = var_74_3
    var_c0 = fconvert.s(fconvert.t(var_b8))
    float var_60 = eax_20
    float var_bc_1 = fconvert.s(x87_r5)
    float var_5c = var_7c_4
    float var_b8_1 = fconvert.s(x87_r6)
    float var_58 = var_78_4
    float var_b4_1 = fconvert.s(x87_r4)
    float var_54 = var_74_4
    var_80 = var_c0
    float var_7c_5 = var_bc_1
    float var_78_5 = var_b8_1
    float var_74_5 = var_b4_1
    float var_a8
    float* eax_23 = sub_529410(&var_a8, &var_90)
    int32_t var_8c_1 = eax_23[1]
    var_90 = *eax_23
    int32_t edx_10 = eax_23[2]
    int32_t eax_24 = eax_23[3]
    int32_t var_88_1 = edx_10
    int32_t var_84_1 = eax_24
    sub_4da140(eax_24, edx_10, &var_90, &var_b0)
    float* eax_25 = sub_529410(&var_a8, &var_60)
    int32_t var_8c_2 = eax_25[1]
    var_90 = *eax_25
    int32_t edx_12 = eax_25[2]
    int32_t eax_26 = eax_25[3]
    int32_t var_88_2 = edx_12
    int32_t var_84_2 = eax_26
    sub_4da140(eax_26, edx_12, &var_90, &var_b0)
    float* eax_27 = sub_529410(&var_a8, &var_80)
    int32_t var_8c_3 = eax_27[1]
    var_90 = *eax_27
    int32_t edx_14 = eax_27[2]
    int32_t eax_28 = eax_27[3]
    int32_t var_88_3 = edx_14
    int32_t var_84_3 = eax_28
    sub_4da140(eax_28, edx_14, &var_90, &var_b0)
    float* eax_29 = sub_529410(&var_a8, &var_70)
    int32_t var_8c_4 = eax_29[1]
    var_90 = *eax_29
    int32_t edx_16 = eax_29[2]
    int32_t eax_30 = eax_29[3]
    int32_t var_88_4 = edx_16
    int32_t var_84_4 = eax_30
    sub_4da140(eax_30, edx_16, &var_90, &var_b0)
    var_c0 = fconvert.s(fconvert.t(-1000f))
    long double x87_r7_11 = fconvert.t(data_30d950c)
    var_90 = var_c0
    float var_8c_5 = fconvert.s(fconvert.t(-1.0) / x87_r7_11)
    float var_88_5 = fconvert.s(fconvert.t(4000f))
    float var_84_5 = fconvert.s(float.t(0))
    float* eax_32 = sub_529410(&var_a8, &var_90)
    int32_t edx_19 = eax_32[1]
    var_90 = *eax_32
    int32_t var_8c_6 = edx_19
    int32_t edx_20 = eax_32[3]
    int32_t var_88_6 = eax_32[2]
    int32_t var_84_6 = edx_20
    sub_4da140(eax_32, edx_20, &var_90, &data_840bc4)
    var_c0 = fconvert.s(fconvert.t(-1.0) / fconvert.t(data_30d950c))
    float var_bc_3 = fconvert.s(fconvert.t(-1000f))
    var_90 = var_c0
    float var_8c_7 = var_bc_3
    float var_88_7 = fconvert.s(float.t(0))
    float var_84_7 = fconvert.s(fconvert.t(4000f))
    float* eax_35 = sub_529410(&var_a8, &var_90)
    int32_t edx_22 = eax_35[1]
    var_90 = *eax_35
    int32_t var_8c_8 = edx_22
    int32_t edx_23 = eax_35[3]
    int32_t var_88_8 = eax_35[2]
    int32_t var_84_8 = edx_23
    int80_t result = sub_4da140(eax_35, edx_23, &var_90, &data_840bc4)
    
    if (data_30da524 != 0)
        if (data_30da51c s<= 0)
            sub_4c5870("gUI2Editor.s.activeSetCount > 0", &data_83f3d3, "UI2.cpp", 0x156f, 
                "UI2EditorDraw")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_38 = sub_528f30(data_30d951c)
        float edx_24 = *(eax_38 + 0xc)
        var_c0 = *(eax_38 + 8)
        float var_bc_4 = edx_24
        int32_t i = 1
        float var_b8_4 = *(eax_38 + 0x10)
        float var_b4_4 = *(eax_38 + 0x14)
        
        if (data_30da51c s> 1)
            do
                int32_t eax_39 = (&data_30d951c)[i]
                
                if (eax_39 s< 0)
                    sub_4c5870("index >= 0", &data_83f3d3, "UI2.cpp", 0xeb7, "UI2GetIndex")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (eax_39 s>= data_30d94f0)
                    sub_4c5870("index < gUI2Editor.numDisplayEls", &data_83f3d3, "UI2.cpp", 0xeb8, 
                        "UI2GetIndex")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* eax_40 = *((eax_39 << 3) + &data_30d74f0)
                int32_t edx_26 = *(eax_40 + 0xc)
                var_90 = *(eax_40 + 8)
                int32_t var_8c_9 = edx_26
                int32_t var_88_9 = *(eax_40 + 0x10)
                int32_t var_84_9 = *(eax_40 + 0x14)
                float* eax_41 = sub_4684b0(&var_c0, &var_90, &var_a8)
                float edx_29 = eax_41[1]
                var_c0 = *eax_41
                var_bc_4 = edx_29
                i += 1
                var_b8_4 = eax_41[2]
                var_b4_4 = eax_41[3]
            while (i s< data_30da51c)
        
        long double x87_r7_20 = float.t(0)
        int32_t i_1 = 0
        int32_t var_50[0x2]
        var_50[0] = fconvert.s(x87_r7_20)
        var_50[1] = fconvert.s(x87_r7_20)
        float var_48_1 = fconvert.s(x87_r7_20)
        long double x87_r6_5 = fconvert.t(0.5f)
        float var_44_1 = fconvert.s(x87_r6_5)
        float var_40_1 = fconvert.s(x87_r7_20)
        long double x87_r5_6 = float.t(1)
        float var_3c_1 = fconvert.s(x87_r5_6)
        float var_2c_1 = fconvert.s(x87_r5_6)
        float var_28_1 = fconvert.s(x87_r5_6)
        float var_20_1 = fconvert.s(x87_r5_6)
        float var_18_1 = fconvert.s(x87_r5_6)
        float var_14_1 = fconvert.s(x87_r5_6)
        float var_38_1 = fconvert.s(x87_r6_5)
        float var_30_1 = fconvert.s(x87_r6_5)
        float var_1c_1 = fconvert.s(x87_r6_5)
        float var_34_1 = fconvert.s(x87_r7_20)
        float var_24_1 = fconvert.s(x87_r7_20)
        var_60.q = fconvert.d(fconvert.t(var_b8_4) - fconvert.t(var_c0))
        var_80.q = fconvert.d(fconvert.t(var_b4_4) - fconvert.t(var_bc_4))
        
        do
            long double x87_r7_27 = fconvert.t(4.0)
            var_b0.d =
                fconvert.s(fconvert.t((&var_50)[i_1][0]) * fconvert.t(var_60.q) + fconvert.t(var_c0))
            var_4c
            float var_ac_1 = fconvert.s(fconvert.t(*(&var_4c + (i_1 << 3))) * fconvert.t(var_80.q)
                + fconvert.t(var_bc_4))
            long double x87_r6_14 = fconvert.t(var_b0.d)
            var_70 = fconvert.s(x87_r6_14 + x87_r7_27)
            long double x87_r5_9 = fconvert.t(var_ac_1)
            float var_6c_1 = fconvert.s(x87_r5_9 + x87_r7_27)
            float var_94_1 = fconvert.s(x87_r5_9 - x87_r7_27)
            var_90 = fconvert.s(fconvert.t(fconvert.s(x87_r6_14 - x87_r7_27)))
            var_a8 = var_90
            float var_8c_10 = fconvert.s(fconvert.t(var_94_1))
            float var_cc_9 = var_8c_10
            float var_a4_1 = var_8c_10
            float var_9c_1 = fconvert.s(fconvert.t(var_6c_1))
            float var_a0_1 = fconvert.s(fconvert.t(var_70))
            sub_4da250(&var_a8, &data_840b50, fconvert.s(fconvert.t(2f)))
            i_1 += 1
        while (i_1 s< 8)
    
    sub_527b00(&data_30d9508)
    sub_5a6aba(eax_1 ^ &var_c0)
    return result
}
