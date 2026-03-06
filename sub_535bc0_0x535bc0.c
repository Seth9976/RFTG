// 函数名称: sub_535bc0
// 虚拟地址: 0x535bc0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_535bc0(int32_t* arg1)
{
    // 第一条实际指令: void var_344
    void var_344
    int32_t eax_1 = __security_cookie ^ &var_344
    int32_t eax_2 = arg1[5]
    void* result_1 = sub_4cce80(eax_2)
    char* ebx_1 = arg1[6]
    void* result_2 = result_1
    char* var_340 = ebx_1
    int32_t var_338 = arg1[5]
    int32_t i = 0
    void var_2f8
    sub_6469c0(&var_2f8)
    int16_t top = 0
    void* result = sub_6493a0(&var_2f8, arg1[2], *arg1, fconvert.s(fconvert.t(0.400000006f)))
    
    if (result == 0)
        int32_t var_308[0x4]
        sub_646590(&var_308)
        sub_646650(&var_308, "ENCODER", U"x")
        void var_2d8
        sub_64b640(&var_2d8, &var_2f8)
        int128_t var_1e8[0x7]
        int32_t ecx_2
        int32_t edx_1
        ecx_2, edx_1 = sub_649a50(&var_2d8, &var_1e8)
        int32_t var_178[0x5b]
        sub_646480(&var_178, sub_5aa87a(0, edx_1, ecx_2, nullptr))
        void var_248
        void var_228
        void var_208
        sub_6476c0(&var_2d8, &var_308, &var_248, &var_228, &var_208)
        sub_645980(&var_178, &var_248)
        sub_645980(&var_178, &var_228)
        sub_645980(&var_178, &var_208)
        void* edi_1 = nullptr
        int128_t* var_328
        void* var_324
        int128_t* var_320
        void* var_31c
        
        while (sub_645c50(&var_178, &var_328) != 0)
            sub_5ab990(result_2, var_328, var_324)
            void* esi = result_2 + var_324
            sub_5ab990(esi, var_320, var_31c)
            result_2 = esi + var_31c
            edi_1 = edi_1 + var_324 + var_31c
        
        do
            void* var_358_7
            int32_t var_354_9
            
            if (var_338 != 0)
                int32_t eax_12
                int32_t edx_3
                edx_3:eax_12 = sx.q(arg1[1])
                int32_t eax_14 = (eax_12 + (edx_3 & 7)) s>> 3
                int32_t temp0_1 = divs.dp.d(sx.q(var_338), arg1[2] * eax_14)
                int32_t var_334_1 = 0x400
                
                if (temp0_1 s<= 0x400)
                    var_334_1 = temp0_1
                
                int32_t eax_18 = sub_649e70(&var_2d8, var_334_1)
                int32_t edx_8 = 0
                
                if (var_334_1 s> 0)
                    unimplemented  {fld st0, qword [0x8a56d0]}
                    int16_t top_2 = top - 2
                    unimplemented  {fld st0, qword [0x8a56c8]}
                    
                    do
                        int32_t j = 0
                        
                        if (arg1[2] s> 0)
                            do
                                int16_t top_5
                                
                                if (eax_14 != 1)
                                    if (eax_14 != 2)
                                        unimplemented  {fstp st0, st0}
                                        unimplemented  {fstp st0, st0}
                                        unimplemented  {fstp st0, st0}
                                        unimplemented  {fstp st0, st0}
                                        sub_4c5870("Halt", &data_83f3d3, "SoundOgg.cpp", 0x93, 
                                            "SoundConvertPcmToOgg")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    int32_t var_32c_1 = sx.d(zx.w(ebx_1[1]) << 8 | zx.w(*ebx_1))
                                    ebx_1 = &var_340[2]
                                    var_338 -= 2
                                    unimplemented  {fild st0, dword [esp+0x24]}
                                    unimplemented  {fmul st0, st2}
                                    float var_32c_2 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                                    unimplemented  {fstp dword [esp+0x24], st0}
                                    top_5 = top_2 - 1
                                    unimplemented  {fld st0, dword [esp+0x24]}
                                else
                                    int32_t var_340_1 = sx.d(*ebx_1)
                                    ebx_1 = &ebx_1[1]
                                    var_338 -= 1
                                    unimplemented  {fild st0, dword [esp+0x10]}
                                    unimplemented  {fmul st0, st1}
                                    float var_340_2 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                                    unimplemented  {fstp dword [esp+0x10], st0}
                                    top_5 = top_2 - 1
                                    unimplemented  {fld st0, dword [esp+0x10]}
                                
                                *(*(eax_18 + (j << 2)) + (edx_8 << 2)) =
                                    fconvert.s(unimplemented  {fstp dword [eax+edx*4], st0})
                                unimplemented  {fstp dword [eax+edx*4], st0}
                                top_2 = top_5 + 1
                                j += 1
                                var_340 = ebx_1
                            while (j s< arg1[2])
                        
                        edx_8 += 1
                    while (edx_8 s< var_334_1)
                    
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    top = top_2 + 2
                
                var_354_9 = var_334_1
                var_358_7 = &var_2d8
            else
                var_354_9 = 0
                var_358_7 = &var_2d8
            
            sub_64a010(var_358_7, var_354_9)
            top -= 1
            unimplemented  {call 0x64a010}
            
            if (sub_64a140(&var_2d8, &var_1e8) == 1)
                int32_t j_1
                
                do
                    sub_64b6f0(&var_1e8, nullptr)
                    sub_64b8e0(&var_1e8)
                    top -= 1
                    unimplemented  {call 0x64b8e0}
                    void var_268
                    
                    if (sub_64bd30(&var_2d8, &var_268) != 0)
                        int32_t k
                        
                        do
                            sub_645980(&var_178, &var_268)
                            
                            if (i == 0)
                                while (sub_645c70(&var_178, &var_328) != 0)
                                    if (var_31c + var_324 + edi_1 s>= eax_2)
                                        sub_4c5870(
                                            "usedBufferSize + og.header_len + og.body_len < bufferSize", 
                                            &data_83f3d3, "SoundOgg.cpp", 0xb0, "SoundConvertPcmToOgg")
                                        
                                        if (IsDebuggerPresent() == 1)
                                            breakpoint
                                        
                                        sub_4c5a30()
                                        noreturn
                                    
                                    sub_5ab990(result_2, var_328, var_324)
                                    int128_t* esi_1 = result_2 + var_324
                                    sub_5ab990(esi_1, var_320, var_31c)
                                    result_2 = esi_1 + var_31c
                                    edi_1 = edi_1 + var_324 + var_31c
                                    
                                    if (sub_645540(&var_328) != 0)
                                        i = 1
                                        break
                            
                            k = sub_64bd30(&var_2d8, &var_268)
                        while (k != 0)
                    
                    j_1 = sub_64a140(&var_2d8, &var_1e8)
                while (j_1 == 1)
        while (i == 0)
        
        sub_645620(&var_178)
        sub_649bb0(&var_1e8)
        sub_649c30(&var_2d8)
        sub_646920(&var_308)
        sub_646a00(&var_2f8)
        int32_t eax_35 = arg1[6]
        
        if (eax_35 != 0)
            _aligned_free_base(eax_35)
        
        result = result_1
        arg1[6] = result
        arg1[5] = edi_1
        arg1[4] = 2
    
    sub_5a6aba(eax_1 ^ &var_344)
    return result
}
