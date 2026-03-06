// 函数名称: sub_572440
// 虚拟地址: 0x572440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_572440()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_698dda
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    char var_e4
    int32_t eax_2 = __security_cookie ^ &var_e4
    int32_t __saved_edi
    int32_t var_f4 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_f8 = sub_4ddf40(&data_2727b74)
    sub_4dda80(fconvert.s(fconvert.t(0.699999988f)))
    long double x87_r7_1 = fconvert.t(-0f)
    float var_b0 = fconvert.s(x87_r7_1)
    float var_ac = fconvert.s(x87_r7_1)
    float var_a0 = var_b0
    float var_a8 = fconvert.s(fconvert.t(-1f))
    int32_t* const var_f8_2 = &data_840b64
    float var_9c = var_ac
    float var_98 = var_a8
    sub_4ddb00(0, var_a8)
    char* var_108
    
    if (data_3078599 == 0)
        char const* const var_f8_3 = "Draw3DLayer"
        int32_t var_fc_1 = 0x326
        char const* const var_100 = "Draw3d.cpp"
        char* const var_104 = &data_83f3d3
        var_108 = "gDraw3DData.submittingRenderItems"
        sub_4c5870(var_108, var_104, var_100, var_fc_1, var_f8_3)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    data_2727bac
    int32_t var_f8_4 = 0
    data_27e853c = 0x3e8
    int32_t ecx_2
    int80_t st0
    st0, ecx_2 = sub_50ec60(var_f8_4)
    int16_t top = 0xffff
    
    if (data_2727bb4 != 0)
        int80_t st0_1
        st0_1, ecx_2 = sub_50ec60(0)
        top = 0xfffe
    
    int32_t i_3 = 0
    int32_t var_dc
    float var_d8[0x4]
    float var_78
    float var_50
    
    if (data_2728bbc s> 0)
        int32_t i
        
        do
            int32_t edx_3 = data_2727bac
            int32_t esi_1 = *((i_3 << 2) + &data_2727bbc)
            int32_t* eax_8 = sub_510b30(ecx_2, edx_3)
            int32_t* edi_1 = *eax_8
            
            if (edi_1[1] != 0x20)
                char const* const var_f8_9 = "FabDefGet"
                int32_t var_fc_4 = 0xe7
                char const* const var_100_2 = "FabDef.cpp"
                char* const var_104_2 = &data_83f3d3
                var_108 = "ptr->assetType == ASSET_TYPE_FAB"
                sub_4c5870(var_108, var_104_2, var_100_2, var_fc_4, var_f8_9)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*edi_1 == 0)
                sub_520800(eax_8, edx_3.b, edi_1, 0)
                
                if (*edi_1 == 0)
                    sub_509540(edi_1)
            
            int32_t eax_10 = **edi_1
            __builtin_memcpy(&var_78, 
                sub_50c2d0(eax_10, &var_d8, esi_1 * 0xb8 + *eax_10, &var_d8, eax_8), 0x28)
            float* eax_12 = sub_54cb80(&var_50, &var_78)
            var_e4 = 0x7f
            __builtin_memcpy(&var_a0, eax_12, 0x28)
            int16_t var_e3_1 = 0x7f7f
            char var_e1_1 = 0xff
            var_dc = var_e4.d
            ecx_2 = sub_4e3140(&var_a0)
            i = i_3 + 1
            i_3 = i
        while (i s< data_2728bbc)
    
    int32_t esi_7 = data_2727bb0
    
    if (esi_7 != 0xffffffff)
        int32_t edx_5 = data_2727bac
        int32_t* eax_15 = sub_510b30(ecx_2, edx_5)
        int32_t* edi_3 = *eax_15
        
        if (edi_3[1] != 0x20)
            char const* const var_f8_8 = "FabDefGet"
            int32_t var_fc_3 = 0xe7
            char const* const var_100_1 = "FabDef.cpp"
            char* const var_104_1 = &data_83f3d3
            var_108 = "ptr->assetType == ASSET_TYPE_FAB"
            sub_4c5870(var_108, var_104_1, var_100_1, var_fc_3, var_f8_8)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*edi_3 == 0)
            sub_520800(eax_15, edx_5.b, edi_3, 0)
            
            if (*edi_3 == 0)
                sub_509540(edi_3)
        
        int32_t eax_19 = **edi_3
        __builtin_memcpy(&var_78, sub_50c2d0(eax_19, &var_50, esi_7 * 0xb8 + *eax_19, &var_50, eax_15), 
            0x28)
        float* eax_21 = sub_54cb80(&var_d8, &var_78)
        var_e4 = 0x7f
        __builtin_memcpy(&var_78, eax_21, 0x28)
        int16_t var_e3_2 = 0x7f7f
        char var_e1_2 = 0xff
        var_dc = var_e4.d
        ecx_2 = sub_4e3140(&var_78)
    
    int32_t esi_13 = data_2727bb8
    
    if (esi_13 != 0xffffffff)
        int32_t edx_7 = data_2727bb4
        int32_t* eax_23 = sub_510b30(ecx_2, edx_7)
        int32_t* edi_5 = *eax_23
        
        if (edi_5[1] != 0x20)
            char const* const var_f8_12 = "FabDefGet"
            int32_t var_fc_6 = 0xe7
            char const* const var_100_3 = "FabDef.cpp"
            char* const var_104_3 = &data_83f3d3
            var_108 = "ptr->assetType == ASSET_TYPE_FAB"
            sub_4c5870(var_108, var_104_3, var_100_3, var_fc_6, var_f8_12)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*edi_5 == 0)
            sub_520800(eax_23, edx_7.b, edi_5, 0)
            
            if (*edi_5 == 0)
                sub_509540(edi_5)
        
        int32_t eax_26 = **edi_5
        __builtin_memcpy(&var_78, 
            sub_50c2d0(eax_26, &var_50, esi_13 * 0xb8 + *eax_26, &var_50, eax_23), 0x28)
        float* eax_28 = sub_54cb80(&var_d8, &var_78)
        var_e4 = 0x7f
        __builtin_memcpy(&var_78, eax_28, 0x28)
        int16_t var_e3_3 = 0x7f7f
        char var_e1_3 = 0xff
        var_dc = var_e4.d
        sub_4e3140(&var_78)
    
    int32_t i_4 = 0
    
    if (data_273abf0 == 0)
        if (data_26a7764 s> 0)
            int32_t i_1
            
            do
                int32_t edx_12 = data_2727bac
                int32_t esi_25 = (&data_26a6764)[i_4]
                int32_t* eax_43 = sub_510b30(i_4, edx_12)
                int32_t* edi_10 = *eax_43
                
                if (edi_10[1] != 0x20)
                    char const* const var_f8_23 = "FabDefGet"
                    int32_t var_fc_12 = 0xe7
                    char const* const var_100_6 = "FabDef.cpp"
                    char* const var_104_6 = &data_83f3d3
                    var_108 = "ptr->assetType == ASSET_TYPE_FAB"
                    sub_4c5870(var_108, var_104_6, var_100_6, var_fc_12, var_f8_23)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (*edi_10 == 0)
                    sub_520800(eax_43, edx_12.b, edi_10, 0)
                    
                    if (*edi_10 == 0)
                        sub_509540(edi_10)
                
                int32_t* edx_13 = *edi_10
                __builtin_memcpy(&var_78, 
                    sub_50c2d0(&var_50, edx_13, esi_25 * 0xb8 + **edx_13, &var_50, eax_43), 0x28)
                __builtin_memcpy(&var_a0, sub_54cb80(&var_d8, &var_78), 0x28)
                sub_4e3140(&var_a0)
                i_1 = i_4 + 1
                i_4 = i_1
            while (i_1 s< data_26a7764)
    else if (data_26a7764 s> 0)
        int32_t i_2
        
        do
            int32_t edx_9 = data_2727bac
            int32_t esi_19 = (&data_26a6764)[i_4]
            int32_t* eax_30 = sub_510b30(i_4, edx_9)
            int32_t* edi_7 = *eax_30
            
            if (edi_7[1] != 0x20)
                char const* const var_f8_20 = "FabDefGet"
                int32_t var_fc_10 = 0xe7
                char const* const var_100_5 = "FabDef.cpp"
                char* const var_104_5 = &data_83f3d3
                var_108 = "ptr->assetType == ASSET_TYPE_FAB"
                sub_4c5870(var_108, var_104_5, var_100_5, var_fc_10, var_f8_20)
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (*edi_7 == 0)
                sub_520800(eax_30, edx_9.b, edi_7, 0)
                
                if (*edi_7 == 0)
                    sub_509540(edi_7)
            
            int32_t* edx_10 = *edi_7
            __builtin_memcpy(&var_78, 
                sub_50c2d0(&var_50, edx_10, esi_19 * 0xb8 + **edx_10, &var_50, eax_30), 0x28)
            __builtin_memcpy(&var_a0, sub_54cb80(&var_d8, &var_78), 0x28)
            sub_4e3140(&var_a0)
            i_2 = i_4 + 1
            i_4 = i_2
        while (i_2 s< data_26a7764)
    
    unimplemented  {fld1 }
    
    if (data_273abf4 == 1)
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        sub_4db310()
        unimplemented  {fld st0, dword [0x273abe0]}
        unimplemented  {fld st0, dword [0x273abe8]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_1 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_1 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_1 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        
        if ((((c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                | ((top - 2) & 7) << 0xb):1.b & 0x41) == 0)
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
        
        var_a0 = fconvert.s(unimplemented  {fstp dword [esp+0x54], st0})
        unimplemented  {fstp dword [esp+0x54], st0}
        float var_98_1 = fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
        unimplemented  {fstp dword [esp+0x5c], st0}
        unimplemented  {fld st0, dword [0x273abe4]}
        unimplemented  {fld st0, dword [0x273abec]}
        unimplemented  {fcom st0, st1} f- unimplemented  {fcom st0, st1}
        bool c0_2 = unimplemented  {fcom st0, st1} f< unimplemented  {fcom st0, st1}
        bool c2_2 = is_unordered.t(unimplemented  {fcom st0, st1}, unimplemented  {fcom st0, st1})
        bool c3_2 = unimplemented  {fcom st0, st1} f== unimplemented  {fcom st0, st1}
        
        if ((((c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                | ((top - 2) & 7) << 0xb):1.b & 0x41) == 0)
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
        
        float var_9c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x58], st0})
        unimplemented  {fstp dword [esp+0x58], st0}
        float var_94_1 = fconvert.s(unimplemented  {fstp dword [esp+0x60], st0})
        unimplemented  {fstp dword [esp+0x60], st0}
        unimplemented  {fld1 }
        var_b0 = var_a0
        float var_a8_1 = var_98_1
        float var_f8_17 = var_94_1
        float var_f8_18 = fconvert.s(unimplemented  {fstp dword [esp], st0})
        unimplemented  {fstp dword [esp], st0}
        float var_ac_1 = var_9c_1
        float var_a4_1 = var_94_1
        sub_4da250(&var_b0, &data_840bd4, var_f8_18)
        void* eax_40 = data_27e7fe4
        *(eax_40 + 0x254) = 0
        __builtin_memcpy(eax_40 + 0x9c, 0x83faf8, 0x40)
        *(eax_40 + 0xdc) = 0
        
        if (data_3078599 == 0)
            char const* const var_f8_19 = "Draw3DQuadGroupEnd"
            int32_t var_fc_9 = 0xab3
            char const* const var_100_4 = "Draw3d.cpp"
            char* const var_104_4 = &data_83f3d3
            var_108 = "gDraw3DData.submittingRenderItems"
            sub_4c5870(var_108, var_104_4, var_100_4, var_fc_9, var_f8_19)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (data_3078598 == 0)
            char const* const var_f8_24 = "Draw3DQuadGroupEnd"
            int32_t var_fc_13 = 0xab4
            char const* const var_100_7 = "Draw3d.cpp"
            char* const var_104_7 = &data_83f3d3
            var_108 = "gDraw3DData.quadGroupDrawing"
            sub_4c5870(var_108, var_104_7, var_100_7, var_fc_13, var_f8_24)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        unimplemented  {fld1 }
        data_3078598 = 0
        data_30785b4 = 0
    
    if ((data_3166854 & 1) == 0)
        data_3166854.d |= 1
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        int32_t var_c_1 = 0
        char** eax_52 = sub_509140(5, "sys/particle_3d.material")
        int32_t var_c_2 = 0xffffffff
        unimplemented  {fld1 }
        data_3166850 = eax_52
    
    if ((data_3166854 & 2) == 0)
        data_3166854.d |= 2
        unimplemented  {fstp st0, st0}
        unimplemented  {fstp st0, st0}
        int32_t var_c_3 = 1
        char** eax_53 = sub_509140(3, "sys/holodeck.texture")
        int32_t var_c_4 = 0xffffffff
        unimplemented  {fld1 }
        data_316684c = eax_53
    
    unimplemented  {fld st0, dword [0x8a55f4]}
    var_50 = fconvert.s(unimplemented  {fst dword [esp+0xa4], st0})
    float var_4c = fconvert.s(unimplemented  {fst dword [esp+0xa8], st0})
    unimplemented  {fldz }
    int32_t var_98_2 = 0
    float var_48 = fconvert.s(unimplemented  {fst dword [esp+0xac], st0})
    float var_3c = fconvert.s(unimplemented  {fst dword [esp+0xb8], st0})
    int32_t var_9c_2 = 0
    float var_30 = fconvert.s(unimplemented  {fst dword [esp+0xc4], st0})
    float var_24 = fconvert.s(unimplemented  {fst dword [esp+0xd0], st0})
    int32_t var_8c = 0
    var_78 = fconvert.s(unimplemented  {fst dword [esp+0x7c], st0})
    int32_t var_94_2 = 0
    float var_68 = fconvert.s(unimplemented  {fst dword [esp+0x8c], st0})
    float var_64 = fconvert.s(unimplemented  {fst dword [esp+0x90], st0})
    int32_t var_90 = 0x3f800000
    float var_5c = fconvert.s(unimplemented  {fstp dword [esp+0x98], st0})
    unimplemented  {fstp dword [esp+0x98], st0}
    unimplemented  {fxch st0, st1}
    unimplemented  {fxch st0, st1}
    float var_44 = fconvert.s(unimplemented  {fst dword [esp+0xb0], st0})
    int32_t var_f8_25 = 4
    float var_34 = fconvert.s(unimplemented  {fst dword [esp+0xc4], st0})
    float* var_fc_14 = &var_50
    float var_2c = fconvert.s(unimplemented  {fst dword [esp+0xd0], st0})
    float var_28 = fconvert.s(unimplemented  {fst dword [esp+0xd4], st0})
    int32_t var_88 = 0
    float var_74 = fconvert.s(unimplemented  {fst dword [esp+0x88], st0})
    int32_t var_84 = 0
    float var_70 = fconvert.s(unimplemented  {fst dword [esp+0x8c], st0})
    float var_6c = fconvert.s(unimplemented  {fst dword [esp+0x90], st0})
    float var_60 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
    unimplemented  {fstp dword [esp+0x9c], st0}
    float var_40 = fconvert.s(unimplemented  {fst dword [esp+0xbc], st0})
    float var_38 = fconvert.s(unimplemented  {fstp dword [esp+0xc4], st0})
    unimplemented  {fstp dword [esp+0xc4], st0}
    unimplemented  {fld st0, dword [0x8a55a4]}
    var_a0 = fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
    unimplemented  {fstp dword [esp+0x5c], st0}
    sub_4e0890(var_fc_14, var_f8_25)
    unimplemented  {fld st0, dword [esp+0xd0]}
    int32_t* ecx_25 = data_3166850
    unimplemented  {fadd dword [esp+0xac]}
    int32_t* edx_14 = data_316684c
    var_b0 = fconvert.s(unimplemented  {fstp dword [esp+0x48], st0})
    unimplemented  {fstp dword [esp+0x48], st0}
    unimplemented  {fld st0, dword [esp+0xd4]}
    unimplemented  {fadd dword [esp+0xbc]}
    float var_ac_2 = fconvert.s(unimplemented  {fstp dword [esp+0x64], st0})
    unimplemented  {fstp dword [esp+0x64], st0}
    unimplemented  {fld st0, dword [esp+0xec]}
    unimplemented  {fadd dword [esp+0xc8]}
    float var_a8_2 = fconvert.s(unimplemented  {fstp dword [esp+0x68], st0})
    unimplemented  {fstp dword [esp+0x68], st0}
    unimplemented  {fld st0, dword [esp+0x60]}
    unimplemented  {fld st0, qword [0x8a5368]}
    unimplemented  {fmul st1, st0}
    unimplemented  {fxch st0, st1}
    unimplemented  {fxch st0, st1}
    var_a0 = fconvert.s(unimplemented  {fstp dword [esp+0x70], st0})
    unimplemented  {fstp dword [esp+0x70], st0}
    unimplemented  {fld st0, dword [esp+0x64]}
    var_108 = var_a0
    unimplemented  {fmul st0, st1}
    int32_t* var_9c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x74], st0})
    unimplemented  {fstp dword [esp+0x74], st0}
    unimplemented  {fmul st0, dword [esp+0x68]}
    float var_98_3 = fconvert.s(unimplemented  {fstp dword [esp+0x7c], st0})
    unimplemented  {fstp dword [esp+0x7c], st0}
    sub_4de380(&var_108, &var_78, &var_50, &var_78, &data_be4aac, 0, var_108, var_9c_3, var_98_3, 
        edx_14, ecx_25)
    sub_4db310()
    char* eax_56 = *(data_26a6760 + 0x20)
    char* const esi_31 = &data_83f3d3
    
    if (eax_56 != 0)
        esi_31 = eax_56
    
    if ((data_3166854 & 4) == 0)
        data_3166854.d |= 4
        int32_t var_c_5 = 2
        data_3166848 = sub_509140(0x12, "sys/debugfont.font")
        int32_t var_c_6 = 0xffffffff
    
    unimplemented  {fldz }
    data_3166848
    var_a0 = fconvert.s(unimplemented  {fst dword [esp+0x54], st0})
    void* var_9c_4 = fconvert.s(unimplemented  {fstp dword [esp+0x58], st0})
    unimplemented  {fstp dword [esp+0x58], st0}
    unimplemented  {fild st0, dword [eax+0x14]}
    var_b0 = var_a0
    void* var_ac_3 = var_9c_4
    float var_98_4 = fconvert.s(unimplemented  {fstp dword [esp+0x5c], st0})
    unimplemented  {fstp dword [esp+0x5c], st0}
    unimplemented  {fild st0, dword [eax+0x18]}
    float var_a8_3 = var_98_4
    float var_94_3 = fconvert.s(unimplemented  {fstp dword [esp+0x60], st0})
    unimplemented  {fstp dword [esp+0x60], st0}
    unimplemented  {fld st0, dword [0x8a5748]}
    float var_f8_27 = var_94_3
    float var_f8_28 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    float var_a4_2 = var_94_3
    sub_4cae70(7, &var_b0, var_9c_4, esi_31)
    unimplemented  {call 0x4cae70}
    void* result = data_27e7fe4
    *(result + 0x254) = 0
    __builtin_memcpy(result + 0x9c, 0x83faf8, 0x40)
    *(result + 0xdc) = 0
    
    if (data_3078599 == 0)
        char const* const var_f8_29 = "Draw3DQuadGroupEnd"
        int32_t var_fc_17 = 0xab3
        char const* const var_100_9 = "Draw3d.cpp"
        char* const var_104_9 = &data_83f3d3
        var_108 = "gDraw3DData.submittingRenderItems"
        sub_4c5870(var_108, var_104_9, var_100_9, var_fc_17, var_f8_29)
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (data_3078598 != 0)
        data_3078598 = 0
        data_30785b4 = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        sub_5a6aba(eax_2 ^ &var_e4)
        return result
    
    char const* const var_f8_30 = "Draw3DQuadGroupEnd"
    int32_t var_fc_18 = 0xab4
    char const* const var_100_10 = "Draw3d.cpp"
    char* const var_104_10 = &data_83f3d3
    var_108 = "gDraw3DData.quadGroupDrawing"
    sub_4c5870(var_108, var_104_10, var_100_10, var_fc_18, var_f8_30)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
