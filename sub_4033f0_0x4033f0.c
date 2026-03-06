// 函数名称: sub_4033f0
// 虚拟地址: 0x4033f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_tsub_4033f0()
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(data_8c4d34)
    long double x87_r7 = fconvert.t(data_8c4d34)
    float* esi = data_27e7a40
    esi[4] += 1
    *esi = fconvert.s(x87_r7 + fconvert.t(*esi))
    float var_8 = fconvert.s(x87_r7 * fconvert.t(1000.0))
    long double x87_r7_2 = float.t(0)
    long double x87_r6_2 = fconvert.t(var_8)
    x87_r6_2 - x87_r7_2
    int32_t eax
    eax.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r7_3
    
    if (p)
        x87_r7_3 = x87_r7_2 + fconvert.t(0.5)
    else
        x87_r7_3 = x87_r7_2 - fconvert.t(0.5)
    
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(sub_685f40(x87_r7_3))
    int32_t temp0 = esi[2]
    esi[2] += eax_2
    esi[3] = adc.d(esi[3], edx, temp0 + eax_2 u< temp0)
    sub_42f1b0()
    int80_t result = sub_41b280()
    uint32_t eax_3 = data_27e7a40
    void* ecx = *(eax_3 + 0x548)
    
    if (*(ecx + 0x2c024) != 0)
        do
            int32_t eax_4 = sub_439050(ecx + 0xc024)
            
            if (eax_4 != 0)
                if (eax_4 == 1)
                    eax_3 = data_27e7a40
                    break
                
                if (eax_4 != 2)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x3644, 
                        "UIActionsUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                sub_437ca0()
            
            eax_3 = data_27e7a40
        while (*(*(eax_3 + 0x548) + 0x2c024) != 0)
    
    if (*(eax_3 + 0x528) != 0)
        int32_t* esi_3 = *(eax_3 + 0x548) + 0x45848
        *(eax_3 + 0x528) = 0
        
        if (*esi_3 != 0)
            sub_406d90(esi_3)
            eax_3 = data_27e7a40
        
        int32_t ecx_2 = *(eax_3 + 0x530)
        
        if (ecx_2 == 1)
            *(eax_3 + 0x530) = 0
            sub_407670()
            sub_474460()
            sub_4075c0()
            return result
        
        if (ecx_2 == 2)
            int32_t ecx_3 = *(eax_3 + 0x52c)
            *(eax_3 + 0x530) = 0
            
            if (ecx_3 s< *(eax_3 + 0x2c4958))
                float edx_1 = *(ecx_3 * 0x1f8 + eax_3 + 0xcac)
                int32_t ecx_5 = *(eax_3 + 0x28)
                var_8 = edx_1
                sub_4c75d0(eax_3, edx_1, ecx_5, 4, 0xf425e, &var_8)
                data_27c05f4 = 3
                return result
            
            sub_4c5870("gCClient->nextGame.gameIndex < gCClient->numGameDescNetwork", &data_83f3d3, 
                "..\code\CClient.cpp", 0x1ee, "CVRClientUpdate")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*(data_27e7fd0 + 0x27) != 0)
            sub_42dc20()
            return result
        
        sub_477270()
    
    return result
}
