// 函数名称: sub_4f7860
// 虚拟地址: 0x4f7860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4f7860(int32_t arg1, int32_t arg2, int32_t arg3, float* arg4)
{
    // 第一条实际指令: __chkstk(0x13dc)
    __chkstk(0x13dc)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    void* const esi_1
    
    if (arg2 != 0)
        void* eax_3 = sub_4fc3d0(&data_be1cb8, arg2)
        bool cond:0_1 = *(eax_3 + 8) != 0
        *(eax_3 + 0x1c) = 1
        
        if (cond:0_1)
            esi_1 = &data_8408f8
        else
            int32_t var_14_1 = 0x1100
            int32_t* ebx = sub_4f4890(*(eax_3 + 4))
            int32_t* var_1210_1 = ebx
            int128_t var_11d4[0x4]
            sub_5abfc0(&var_11d4, 0, var_14_1)
            int32_t var_d4_1 = 1
            __builtin_memcpy(&var_11d4, arg3, 0x40)
            int32_t var_1194_1 = 0xffffffff
            int32_t var_129c
            __builtin_memset(&var_129c, &data_8408f8, 0x70)
            int32_t var_11e4_1 = 0
            
            if (ebx[1] s> 0)
                int32_t var_1200_1 = 0
                
                while (true)
                    int32_t* ebx_2 = *ebx + var_1200_1
                    int32_t* var_11e8_1 = ebx_2
                    int128_t* eax_6 = sub_4f6e90(var_11e4_1, eax_3, ebx_2[2])
                    float var_8c
                    long double st0
                    int16_t top
                    
                    if (ebx_2[1] != 6)
                        if (var_d4_1 s<= 0)
                            sub_4c5870("stack.numEntries > 0", &data_83f3d3, "UIDef.cpp", 0x66f, "Peek")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        unimplemented  {fld st0, dword [edx+0x10]}
                        unimplemented  {fldz }
                        unimplemented  {fucompp } f- unimplemented  {fucompp }
                        bool c0_1 = unimplemented  {fucompp } f< unimplemented  {fucompp }
                        bool c2_1 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
                        bool c3_1 = unimplemented  {fucompp } f== unimplemented  {fucompp }
                        unimplemented  {fucompp }
                        unimplemented  {fucompp }
                        void var_4c
                        __builtin_memcpy(&var_4c, &(&__saved_ebp)[var_d4_1 * 0x11 - 0x485], 0x40)
                        int32_t eax_7
                        eax_7.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                            | (top & 7) << 0xb
                        bool p_1 = unimplemented  {test ah, 0x44}
                        int32_t eax_11
                        
                        if (not(p_1))
                            if (*(eax_6 + 8) s<= *eax_6)
                                eax_11.b = ebx_2[0xc].b
                            else
                                eax_11.b = *(eax_6 + 0xc)
                        
                        if (p_1 || eax_11.b == 0)
                            int32_t eax_12 = ebx_2[1]
                            
                            if (eax_12 == 2)
                                int32_t edi_3 = eax_6[0x12].d
                                int32_t var_11f8_1
                                int32_t eax_29
                                int32_t esi_9
                                
                                if (edi_3 s<= *eax_6)
                                    int32_t ecx_18 = ebx_2[0x22]
                                    eax_29 = ebx_2[0x23]
                                    var_11f8_1 = ecx_18
                                    esi_9 = ecx_18
                                else
                                    esi_9 = eax_6[0x13].d
                                    eax_29 = *(eax_6 + 0x12c)
                                    var_11f8_1 = esi_9
                                
                                int32_t eax_30
                                int32_t edx_11
                                
                                if (edi_3 s<= *eax_6)
                                    eax_30 = ebx_2[0x23]
                                    edx_11 = ebx_2[0x22]
                                else
                                    eax_30 = *(eax_6 + 0x124)
                                    edx_11 = *(eax_6 + 0x128)
                                
                                int32_t var_1224_1 = edx_11
                                int32_t edx_13 = ebx_2[0x23] * ebx_2[0x22]
                                int32_t var_1228 = eax_30
                                
                                if (edx_13 s> 0x1e)
                                    sub_4c5870("el.rows * el.cols <= 30", &data_83f3d3, "UIDef.cpp", 
                                        0x6fe, "UIStateHitTestNew")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                if (eax_29 * esi_9 s> 0x1e)
                                    sub_4c5870("dimsUpdate.x * dimsUpdate.y <= 30", &data_83f3d3, 
                                        "UIDef.cpp", 0x6ff, "UIStateHitTestNew")
                                    
                                    if (IsDebuggerPresent() == 1)
                                        breakpoint
                                    
                                    sub_4c5a30()
                                    noreturn
                                
                                void var_12bc
                                int32_t* eax_34 =
                                    sub_4faf50(var_11e4_1, edx_13, arg2, &var_12bc, &var_4c)
                                int32_t ecx_20 = eax_34[1]
                                float var_12ac = *eax_34
                                int32_t var_12a8_1 = ecx_20
                                int32_t var_12a4_1 = eax_34[2]
                                int32_t var_12a0_1 = eax_34[3]
                                int32_t var_11d8_2 = 0
                                
                                if (esi_9 s> 0)
                                    int32_t eax_52
                                    
                                    do
                                        int32_t var_120c_1 = 0
                                        
                                        if (eax_29 s> 0)
                                            int32_t eax_50
                                            
                                            do
                                                int32_t var_1208 = var_120c_1
                                                int32_t var_1204_1 = var_11d8_2
                                                void* eax_37 = sub_4f7720(&var_1208, ebx_2, eax_6)
                                                
                                                if (*(eax_37 + 0x20) != 0)
                                                    int32_t ecx_23 = *(eax_37 + 0x28)
                                                    var_1208 = *(eax_37 + 0x24)
                                                    var_1204_1 = ecx_23
                                                
                                                void var_136c
                                                int32_t eax_40
                                                st0, eax_40 = sub_4f56d0(&var_136c, var_11e8_1, eax_6, 
                                                    &var_4c, &var_1208, &var_1228, nullptr)
                                                unimplemented  {call 0x4f56d0}
                                                unimplemented  {fld st0, dword [eax+0x154]}
                                                __builtin_memcpy(&var_8c, eax_40, 0x40)
                                                unimplemented  {fadd dword [ebp-0x88]}
                                                var_8c = fconvert.s(unimplemented  {fstp dword [ebp
                                                    -0x88], st0})
                                                unimplemented  {fstp dword [ebp-0x88], st0}
                                                unimplemented  {fld st0, dword [eax+0x158]}
                                                unimplemented  {fadd dword [ebp-0x84]}
                                                float var_88_1 = fconvert.s(unimplemented  {fstp dword [
                                                    ebp-0x84], st0})
                                                unimplemented  {fstp dword [ebp-0x84], st0}
                                                top -= 1
                                                float eax_41 = *arg4
                                                float var_1214 = arg4[1]
                                                float var_1218 = eax_41
                                                char eax_42 = sub_4057a0(&var_12ac, arg4)
                                                
                                                if (eax_42 == 0 && *(var_11e8_1 + 0xae) != eax_42)
                                                    unimplemented  {fld st0, dword [0x8a594c]}
                                                    float var_1220_1 = fconvert.s(unimplemented  {fst 
                                                        dword [ebp-0x121c], st0})
                                                    float var_121c_1 = fconvert.s(unimplemented  {fstp 
                                                        dword [ebp-0x1218], st0})
                                                    unimplemented  {fstp dword [ebp-0x1218], st0}
                                                    var_1218 = var_1220_1
                                                    var_1214 = var_121c_1
                                                
                                                void var_13dc
                                                int32_t eax_45 = sub_4f7860(&var_13dc, 
                                                    *(eax_37 + 0x434), &var_8c, &var_1218)
                                                bool cond:4_1 = var_129c != 1
                                                int32_t var_132c
                                                __builtin_memcpy(&var_132c, eax_45, 0x70)
                                                int32_t eax_46 = var_132c
                                                
                                                if ((cond:4_1 || eax_46 != 2) && eax_46 != 0)
                                                    int32_t edx_21 = var_1208
                                                    int32_t var_130c = *(eax_6 + 0x11c)
                                                    int32_t var_1318_1 = *(eax_37 + 0x434)
                                                    int32_t var_1314_1 = edx_21
                                                    int32_t var_1310_1 = var_1204_1
                                                    __builtin_memcpy(&var_129c, &var_132c, 0x70)
                                                
                                                ebx_2 = var_11e8_1
                                                eax_50 = var_120c_1 + 1
                                                var_120c_1 = eax_50
                                            while (eax_50 s< eax_29)
                                            esi_9 = var_11f8_1
                                        
                                        eax_52 = var_11d8_2 + 1
                                        var_11d8_2 = eax_52
                                    while (eax_52 s< esi_9)
                            else if (eax_12 == 3)
                                if (sub_4f72a0(eax_12 - 3, eax_6.b, var_11e8_1, arg4) != 0
                                        && var_11e8_1[0x34].b == 1)
                                    void* var_1278_3 = eax_3
                                    int32_t var_1298_3 = arg2
                                    int32_t var_1284_3 = 0
                                    int32_t var_1294_3 = var_11e4_1
                                    int32_t var_1280_3 = 0
                                    float edx_10 = *arg4
                                    int32_t eax_28 = arg4[1]
                                    int32_t* var_1274_3 = var_11e8_1
                                    int128_t* var_1270_3 = eax_6
                                    int32_t var_1288_3 = 0xffffffff
                                    int32_t var_127c_3 = 0
                                    var_129c = 1
                                    void var_126c
                                    __builtin_memcpy(&var_126c, &var_4c, 0x40)
                                    float var_1290_3 = edx_10
                                    int32_t var_128c_3 = eax_28
                            else if (eax_12 == 5)
                                if (sub_4f72a0(eax_12 - 5, eax_6.b, var_11e8_1, arg4) != 0
                                        && *(eax_6 + 0x21) == 0)
                                    char ecx_14
                                    
                                    if (*(eax_6 + 8) s<= *eax_6)
                                        ecx_14 = var_11e8_1[0xc].b
                                    else
                                        ecx_14 = *(eax_6 + 0xc)
                                    
                                    if (ecx_14 == 0)
                                        void* var_1278_2 = eax_3
                                        int32_t var_1298_2 = arg2
                                        int128_t* var_1270_2 = eax_6
                                        int32_t var_1280_2 = 0
                                        float edx_8 = *arg4
                                        int32_t eax_23 = arg4[1]
                                        int32_t var_1284_2 = 0
                                        int32_t var_1288_2 = 0xffffffff
                                        int32_t var_127c_2 = 0
                                        var_129c = 1
                                        int32_t var_1294_2 = var_11e4_1
                                        int32_t* var_1274_2 = var_11e8_1
                                        float var_1290_2 = edx_8
                                        int32_t var_128c_2 = eax_23
                            else if (sub_4f72a0(eax_12 - 5, eax_6.b, var_11e8_1, arg4) != 0
                                    && *(eax_6 + 0x21) == 0)
                                char ecx_11
                                
                                if (*(eax_6 + 8) s<= *eax_6)
                                    ecx_11 = var_11e8_1[0xc].b
                                else
                                    ecx_11 = *(eax_6 + 0xc)
                                
                                if (ecx_11 == 0 && var_129c != 1)
                                    void* var_1278_1 = eax_3
                                    int32_t var_1298_1 = arg2
                                    int128_t* var_1270_1 = eax_6
                                    int32_t var_1280_1 = 0
                                    float edx_5 = *arg4
                                    int32_t eax_19 = arg4[1]
                                    int32_t var_1284_1 = 0
                                    int32_t var_1288_1 = 0xffffffff
                                    int32_t var_127c_1 = 0
                                    var_129c = 2
                                    int32_t var_1294_1 = var_11e4_1
                                    int32_t* var_1274_1 = var_11e8_1
                                    float var_1290_1 = edx_5
                                    int32_t var_128c_1 = eax_19
                        
                        sub_4f75f0(&var_11d4)
                    else
                        if (var_d4_1 s<= 0)
                            sub_4c5870("stack.numEntries > 0", &data_83f3d3, "UIDef.cpp", 0x66f, "Peek")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        void* eax_8 = &(&__saved_ebp)[var_d4_1 * 0x11 - 0x474]
                        void var_cc
                        __builtin_memcpy(&var_cc, eax_8 - 0x44, 0x40)
                        top += 1
                        var_d4_1 += 1
                        __builtin_memcpy(eax_8, sub_4f84f0(eax_8, &var_cc, ebx_2, st0, &var_8c, eax_6), 
                            0x40)
                        *(eax_8 + 0x40) = ebx_2[0x12]
                    var_1200_1 += 0x118
                    int32_t eax_54 = var_11e4_1 + 1
                    var_11e4_1 = eax_54
                    
                    if (eax_54 s>= var_1210_1[1])
                        break
                    
                    ebx = var_1210_1
            
            esi_1 = &var_129c
    else
        esi_1 = &data_8408f8
    
    __builtin_memcpy(arg1, esi_1, 0x70)
    int32_t entry_ebx
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
    return arg1
}
