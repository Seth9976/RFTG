// 函数名称: sub_4f8710
// 虚拟地址: 0x4f8710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4f8710(int32_t arg1 @ esi, int32_t* arg2, int32_t arg3, int32_t arg4, float* arg5, char arg6, float arg7, int32_t* arg8, void* arg9, float** arg10)
{
    // 第一条实际指令: __chkstk(0x12e8)
    __chkstk(0x12e8)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    float var_1240 = fconvert.s(fconvert.t(arg7))
    int16_t top = 0
    char var_1218 = arg6
    int32_t* eax_4
    
    if (arg3 != 0)
        void* eax_5 = sub_4fc3d0(&data_be1cb8, arg3)
        bool cond:0_1 = *(eax_5 + 8) == 0
        *(eax_5 + 0x1c) = 1
        
        if (not(cond:0_1))
            __builtin_memset(arg2, 0, 0x14)
            sub_5a6aba(arg1 ^ &__saved_ebp)
            return arg2
        
        void* eax_7 = sub_4f4890(*(eax_5 + 4))
        int128_t var_11d8[0x4]
        sub_5abfc0(&var_11d8, 0, 0x1100)
        int32_t var_d8_1 = 1
        int32_t var_1198_1 = 0xffffffff
        __builtin_memcpy(&var_11d8, arg4, 0x40)
        int32_t i = 0
        char var_11d9_1 = 0
        int32_t i_2
        __builtin_memset(&i_2, 0, 0x18)
        float* var_1224_1 = nullptr
        int128_t* var_1230_1 = nullptr
        int32_t i_1 = 0
        float* var_1204_1
        int32_t var_1200_1
        float* var_11fc_1
        
        if (*(eax_7 + 4) s> 0)
            int32_t var_11f8_1
            int32_t i_3
            void* var_11e8
            int32_t edx_5
            
            do
                float* eax_10 = i * 0x118 + *eax_7
                int128_t* ebx_2 = sub_4f6e90(i, eax_5, eax_10[2])
                int32_t edx_2 = eax_10[1]
                int128_t* var_11e4_1 = ebx_2
                float var_50
                long double st0
                
                if (edx_2 != 6)
                    if (var_d8_1 s<= 0)
                        sub_4c5870("stack.numEntries > 0", &data_83f3d3, "UIDef.cpp", 0x66f, "Peek")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    unimplemented  {fld st0, dword [ebx+0x10]}
                    unimplemented  {fldz }
                    unimplemented  {fucompp } f- unimplemented  {fucompp }
                    bool c0_1 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                    bool c2_1 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                    bool c3_1 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    unimplemented  {fucompp }
                    void var_90
                    float* ecx_13 =
                        __builtin_memcpy(&var_90, &(&__saved_ebp)[var_d8_1 * 0x11 - 0x486], 0x40)
                    int32_t eax_17
                    eax_17.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                        | (top & 7) << 0xb
                    bool p_1 = unimplemented  {test ah, 0x44}
                    int32_t eax_18
                    
                    if (not(p_1))
                        if (*(ebx_2 + 8) s<= *ebx_2)
                            ecx_13 = eax_10
                            eax_18.b = ecx_13[0xc].b
                        else
                            eax_18.b = *(ebx_2 + 0xc)
                    
                    if (p_1 || eax_18.b == 0)
                        if (edx_2 - 2 u<= 6)
                            switch (edx_2)
                                case 2
                                    int32_t esi_8
                                    int32_t edi_3
                                    
                                    if (ebx_2[0x12].d s<= *ebx_2)
                                        esi_8 = eax_10[0x23]
                                        edi_3 = eax_10[0x22]
                                    else
                                        esi_8 = *(ebx_2 + 0x12c)
                                        edi_3 = ebx_2[0x13].d
                                    
                                    int32_t ecx_15
                                    int32_t edx_6
                                    
                                    if (ebx_2[0x12].d s<= *ebx_2)
                                        ecx_15 = eax_10[0x23]
                                        edx_6 = eax_10[0x22]
                                    else
                                        ecx_15 = *(ebx_2 + 0x124)
                                        edx_6 = *(ebx_2 + 0x128)
                                    
                                    int32_t var_1258_1 = edx_6
                                    int32_t edx_8 = eax_10[0x23] i* eax_10[0x22]
                                    int32_t var_125c = ecx_15
                                    
                                    if (edx_8 s> 0x1e)
                                        sub_4c5870("el.rows * el.cols <= 30", &data_83f3d3, 
                                            "UIDef.cpp", 0x84f, "UIStateUpdate")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    if (esi_8 * edi_3 s> 0x1e)
                                        sub_4c5870("dimsUpdate.x * dimsUpdate.y <= 30", &data_83f3d3, 
                                            "UIDef.cpp", 0x850, "UIStateUpdate")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    void var_1290
                                    int32_t* eax_23 = sub_4faf50(i_1, edx_8, arg3, &var_1290, &var_90)
                                    int32_t edx_9 = eax_23[1]
                                    float var_126c = *eax_23
                                    ecx_13 = eax_23[2]
                                    int32_t var_1268_1 = edx_9
                                    float* var_1264_1 = ecx_13
                                    int32_t var_1260_1 = eax_23[3]
                                    int32_t var_11f0_2 = 0
                                    
                                    if (edi_3 s> 0)
                                        int32_t eax_37
                                        
                                        do
                                            int32_t var_122c_1 = 0
                                            
                                            if (esi_8 s> 0)
                                                int32_t eax_35
                                                
                                                do
                                                    int32_t var_1238 = var_122c_1
                                                    int32_t var_1234_1 = var_11f0_2
                                                    void* eax_26 = sub_4f7720(&var_1238, eax_10, ebx_2)
                                                    bool cond:6_1 = *(eax_26 + 0x20) == 0
                                                    var_11e8 = eax_26
                                                    
                                                    if (not(cond:6_1))
                                                        var_1238 = *(eax_26 + 0x24)
                                                        int32_t var_1234_2 = *(eax_26 + 0x28)
                                                    
                                                    void var_12e8
                                                    int32_t eax_28
                                                    st0, eax_28 = sub_4f56d0(&var_12e8, eax_10, ebx_2, 
                                                        &var_90, &var_1238, &var_125c, nullptr)
                                                    unimplemented  {call 0x4f56d0}
                                                    unimplemented  {fld st0, dword [ebx+0x154]}
                                                    int32_t edx_13 = arg5[1]
                                                    __builtin_memcpy(&var_50, eax_28, 0x40)
                                                    unimplemented  {fadd dword [ebp-0x4c]}
                                                    var_50 = fconvert.s(unimplemented  {fstp dword [ebp
                                                        -0x4c], st0})
                                                    unimplemented  {fstp dword [ebp-0x4c], st0}
                                                    unimplemented  {fld st0, dword [ebx+0x158]}
                                                    unimplemented  {fadd dword [ebp-0x48]}
                                                    float var_4c_1 = fconvert.s(unimplemented  {fstp 
                                                        dword [ebp-0x48], st0})
                                                    unimplemented  {fstp dword [ebp-0x48], st0}
                                                    bool cond:4_1 = *(eax_10 + 0xae) == 0
                                                    float var_124c = *arg5
                                                    int32_t var_1248_1 = edx_13
                                                    
                                                    if (not(cond:4_1)
                                                            && sub_4057a0(&var_126c, arg5) == 0)
                                                        unimplemented  {fld st0, dword [0x8a594c]}
                                                        float var_1254_1 = fconvert.s(unimplemented  {
                                                            fst dword [ebp-0x1250], st0})
                                                        float var_1250_1 = fconvert.s(unimplemented  {
                                                            fstp dword [ebp-0x124c], st0})
                                                        unimplemented  {fstp dword [ebp-0x124c], st0}
                                                        var_124c = var_1254_1
                                                        float var_1248_2 = var_1250_1
                                                    
                                                    unimplemented  {fld st0, dword [ebp-0x123c]}
                                                    void* esi_11 = var_11e8
                                                    int32_t* var_20_2 = &var_1238
                                                    float var_20_3 = fconvert.s(unimplemented  {fstp 
                                                        dword [esp], st0})
                                                    unimplemented  {fstp dword [esp], st0}
                                                    top -= 1
                                                    void var_12a8
                                                    float** eax_33 = sub_4f8710(&var_12a8, 
                                                        *(esi_11 + 0x434), &var_50, &var_124c, 
                                                        var_1218.d, var_20_3, &i_1, ebx_2, &var_1238)
                                                    float* edi_5 = eax_33[2]
                                                    ecx_13 = *eax_33
                                                    int32_t edx_16 = eax_33[1]
                                                    int32_t edi_6 = eax_33[3]
                                                    int32_t i_5 = eax_33[4]
                                                    
                                                    if (*(esi_11 + 0x1c) == 2)
                                                        *(eax_5 + 0x1c) = 2
                                                    
                                                    if (ecx_13 != 0)
                                                        var_1204_1 = ecx_13
                                                        ecx_13 = edi_5
                                                        var_1200_1 = edx_16
                                                        var_11fc_1 = ecx_13
                                                        var_11f8_1 = edi_6
                                                        i_3 = i_5
                                                    
                                                    eax_35 = var_122c_1 + 1
                                                    var_122c_1 = eax_35
                                                while (eax_35 s< esi_8)
                                            
                                            eax_37 = var_11f0_2 + 1
                                            var_11f0_2 = eax_37
                                        while (eax_37 s< edi_3)
                                case 3
                                    if (*(ebx_2 + 0x15c) != 0)
                                        st0, ecx_13 = sub_506480(&ebx_2[0x16], 0, &data_840a00)
                                        top -= 1
                                        unimplemented  {call 0x506480}
                                case 5
                                    char ecx_29 = sub_4f72a0(edx_2 - 2, edx_2.b, eax_10, arg5)
                                    
                                    if (ecx_29 == 0 || *(var_11e4_1 + 0x21) != 0)
                                        int32_t eax_45
                                        eax_45, ecx_13 = sub_4f73c0(var_1218, eax_10, ecx_29, 
                                            var_11e4_1 + 0x28, &var_11e4_1[2], eax_10)
                                        
                                        if (eax_45 == 1)
                                            int32_t eax_47 = *(eax_5 + 0x2c)
                                            ecx_13 = nullptr
                                            
                                            if (eax_47 == 0)
                                                int32_t edx_26
                                                
                                                if (arg9 != 0)
                                                    edx_26 = *(arg9 + 0x11c)
                                                
                                                if (arg9 == 0 || edx_26 == 0)
                                                    var_1204_1 = 2
                                                    i_3 = i_1
                                                    
                                                    if (arg8 != 0)
                                                        var_1200_1 = *arg8
                                                        ecx_13 = *arg10
                                                        var_11fc_1 = ecx_13
                                                        var_11f8_1 = arg10[1]
                                                else
                                                    var_11e8 = nullptr
                                                    
                                                    if (arg10 == 0)
                                                        sub_4c5870("parentTableSlot", &data_83f3d3, 
                                                            "UIDef.cpp", 0x8b5, "UIStateUpdate")
                                                        
                                                        if (IsDebuggerPresent() == 1)
                                                            breakpoint
                                                        
                                                        sub_4c5a30()
                                                        noreturn
                                                    
                                                    var_1204_1 = 3
                                                    int32_t i_7
                                                    i_7, ecx_13 = edx_26(arg3, arg10, i_1, &var_11e8)
                                                    i_3 = i_7
                                            else
                                                int32_t i_4 = i_1
                                                var_11e8 = nullptr
                                                var_1204_1 = 3
                                                int32_t i_6
                                                i_6, ecx_13 = eax_47(arg3, i_4, &var_11e8)
                                                i_3 = i_6
                                    else
                                        if (var_11d9_1 != 0)
                                            int128_t* eax_43
                                            eax_43.b = var_1218
                                            sub_4f73c0(eax_43.b, var_1224_1, 0, var_1230_1 + 0x28, 
                                                &var_1230_1[2], var_1224_1)
                                        
                                        ecx_13 = eax_10
                                        var_11d9_1 = 1
                                        i_2 = i_1
                                        var_1224_1 = ecx_13
                                        var_1230_1 = var_11e4_1
                                    
                                    ebx_2 = var_11e4_1
                                case 7
                                    void* eax_38 = sub_4e7b40(ecx_13, *(ebx_2 + 0x9c))
                                    
                                    if (eax_38 != 0)
                                        st0, ecx_13 = sub_4e7c30(eax_38)
                                        top -= 1
                                        unimplemented  {call 0x4e7c30}
                                case 8
                                    int128_t* eax_39 = sub_4eb5a0(ecx_13, ebx_2[0xa].d)
                                    int32_t* edx_19 = eax_10[0x11]
                                    
                                    if (edx_19 != 0)
                                        if (eax_39 == 0)
                                            int32_t* const var_14_9 = &data_840a00
                                            eax_39 = sub_4eb510(eax_39, edx_19, ecx_13)
                                            eax_39[2].d = 1
                                            ebx_2[0xa].d = *(eax_39 + 0x78)
                                        
                                        ecx_13 = *eax_39
                                        
                                        if (ecx_13 != eax_10[0x11])
                                            int32_t eax_40
                                            float* ecx_25
                                            eax_40, ecx_25 = sub_4eb650()
                                            int32_t* const var_14_10 = &data_840a00
                                            eax_39 = sub_4eb510(eax_40, eax_10[0x11], ecx_25)
                                            ecx_13 = *(eax_39 + 0x78)
                                            eax_39[2].d = 1
                                            var_11e4_1[0xa].d = ecx_13
                                            ebx_2 = var_11e4_1
                                        
                                        st0 = sub_4eeef0(eax_39)
                                        top -= 1
                                        unimplemented  {call 0x4eeef0}
                                    else if (eax_39 != 0)
                                        ecx_13 = sub_4eb650()
                                        var_11e4_1[0xa].d = 0
                                        ebx_2 = var_11e4_1
                        
                        if (sub_4eb5a0(ecx_13, ebx_2[0xa].d) != 0 && eax_10[1] != 8)
                            sub_4eb650()
                            var_11e4_1[0xa].d = 0
                    
                    edx_5 = sub_4f75f0(&var_11d8)
                else
                    if (var_d8_1 s<= 0)
                        sub_4c5870("stack.numEntries > 0", &data_83f3d3, "UIDef.cpp", 0x66f, "Peek")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_14 = &(&__saved_ebp)[var_d8_1 * 0x11 - 0x475]
                    void var_d0
                    __builtin_memcpy(&var_d0, eax_14 - 0x44, 0x40)
                    int32_t eax_15
                    int32_t edx_4
                    eax_15, edx_4 = sub_4f84f0(eax_14, &var_d0, eax_10, st0, &var_50, ebx_2)
                    var_d8_1 += 1
                    unimplemented  {fld st0, dword [ebp-0x123c]}
                    float var_14_4 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                    unimplemented  {fstp dword [esp+0x4], st0}
                    top += 1
                    __builtin_memcpy(eax_14, eax_15, 0x40)
                    *(eax_14 + 0x40) = eax_10[0x12]
                    edx_5 = sub_4f7490(eax_14, edx_4, ebx_2, eax_10, var_14_4)
                i = i_1 + 1
                i_1 = i
            while (i s< *(eax_7 + 4))
            
            if (var_11d9_1 != 0)
                void* eax_55
                eax_55.b = var_1218
                float* ecx_33
                ecx_33.b = 1
                
                if (sub_4f73c0(eax_55.b, edx_5, ecx_33.b, var_1230_1 + 0x28, &var_1230_1[2], var_1224_1)
                        == 1)
                    int32_t eax_57 = *(eax_5 + 0x2c)
                    
                    if (eax_57 == 0)
                        int32_t eax_65
                        
                        if (arg9 != 0)
                            eax_65 = *(arg9 + 0x11c)
                        
                        if (arg9 == 0 || eax_65 == 0)
                            i_3 = i_2
                            var_1204_1 = 2
                            
                            if (arg8 != 0)
                                var_1200_1 = *arg8
                                var_11fc_1 = *arg10
                                var_11f8_1 = arg10[1]
                        else
                            if (arg10 == 0)
                                sub_4c5870("parentTableSlot", &data_83f3d3, "UIDef.cpp", 0x8ea, 
                                    "UIStateUpdate")
                                
                                if (IsDebuggerPresent() == 1)
                                    breakpoint
                                
                                sub_4c5a30()
                                noreturn
                            
                            var_11e8 = nullptr
                            var_1204_1 = 3
                            i_3 = eax_65(arg3, arg10, i_2, &var_11e8)
                    else
                        int32_t* var_14_18 = &var_11e8
                        var_11e8 = nullptr
                        var_1204_1 = 3
                        i_3 = eax_57(arg3, i_2, var_14_18)
                else if (*(var_1230_1 + 0x21) == 0 && *(var_1230_1 + 0x23) == 0
                        && *(var_1230_1 + 0x22) == 0)
                    int32_t i_8 = i_2
                    *(eax_5 + 0x1c) = 2
                    var_1204_1 = 1
                    i_3 = i_8
                    
                    if (arg8 != 0)
                        var_1200_1 = *arg8
                        var_11fc_1 = *arg10
                        var_11f8_1 = arg10[1]
        
        eax_4 = arg2
        *eax_4 = var_1204_1
        eax_4[1] = var_1200_1
        eax_4[2] = var_11fc_1
    else
        eax_4 = arg2
        __builtin_memset(eax_4, 0, 0x14)
    
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return eax_4
}
