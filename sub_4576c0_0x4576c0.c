// 函数名称: sub_4576c0
// 虚拟地址: 0x4576c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4576c0()
{
    // 第一条实际指令: long double x87_r7 = float.t(0)
    long double x87_r7 = float.t(0)
    void* edi = *(data_27e7a40 + 0x548)
    long double temp0 = fconvert.t(*(edi + 0xbfcc))
    x87_r7 - temp0
    int16_t top = 0
    void* var_c = edi
    void* eax
    eax.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        goto label_457757
    
    int32_t esi_1 = *(edi + 0xbfac)
    int32_t ecx_2
    
    if (esi_1 != 0)
        int32_t* eax_1 = sub_463f60(edi + 0x43960, esi_1)
        ecx_2 = *eax_1
        data_3166730 = ecx_2
        
        if (ecx_2 == 0)
            data_31663cc = eax_1[0x1f]
            goto label_457748
        
        if (ecx_2 != 4)
            goto label_457743
        
        data_31663cc = eax_1[0x21]
    else if (*(edi + 0x2c0ac) == 0xffffffff)
        ecx_2 = data_3166730
    label_457743:
        
        if (ecx_2 u> 6)
        label_4577a6:
            sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x5c7d, "DrawZoomScreen")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    else
        ecx_2 = 5
        data_3166730 = 5
    
    label_457748:
    void* var_8
    int32_t ebx
    
    switch (jump_table_457828[ecx_2])
        case 0x45774f
            sub_454bf0()
        label_457757:
            ebx = 0
            var_8 = edi + 0x64
        label_4577c5:
            int32_t* result
            
            while (true)
                float eax_5 = sub_41db40(ebx)
                uint32_t var_a0_1 = ebx != *(edi + 0x2c0ac)
                sub_4fa4e0(*var_8, eax_5, var_8.b)
                void var_8c
                int32_t eax_7 = sub_40a930(&var_8c)
                unimplemented  {call 0x40a930}
                unimplemented  {fld1 }
                float var_a0_2 = fconvert.s(unimplemented  {fstp dword [esp+0x8], st0})
                unimplemented  {fstp dword [esp+0x8], st0}
                top -= 1
                void var_4c
                __builtin_memcpy(&var_4c, eax_7, 0x40)
                result = sub_4f9fe0(*var_8, &var_4c)
                ebx += 1
                var_8 += 4
                
                if (ebx s>= 0x13)
                    break
                
                edi = var_c
            
            return result
        case 0x457754
            goto label_457757
        case 0x45775e
            sub_456240()
            ebx = 0
            var_8 = edi + 0x64
            goto label_4577c5
        case 0x45776d
            if (*(edi + 0xbfac) == 0)
                goto label_457757
            
            sub_42bbb0(sub_4185c0())
            top = 0xffff
            ebx = 0
            var_8 = edi + 0x64
            goto label_4577c5
        case 0x45778d
            goto label_4577a6
}
