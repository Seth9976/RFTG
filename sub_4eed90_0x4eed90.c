// 函数名称: sub_4eed90
// 虚拟地址: 0x4eed90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4eed90(void* arg1, float arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    void* eax = data_27e7fcc
    
    if (eax == 0)
        sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    void* eax_2 = *(eax + 0x30)
    long double x87_r7 = fconvert.t(arg2)
    *(eax_2 + 0x1c) += 1
    void* esi = arg1
    *(esi + 0x54) += 1
    *(esi + 0x58) = fconvert.s(x87_r7)
    *(esi + 0x5c) = fconvert.s(fconvert.t(*(esi + 0x5c)) + x87_r7)
    long double x87_r6_2 = float.t(0)
    long double temp1 = fconvert.t(*(esi + 0x50))
    x87_r6_2 - temp1
    eax_2.w = (x87_r6_2 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, temp1) ? 1 : 0) << 0xa
        | (x87_r6_2 == temp1 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        long double x87_r6_4 = fconvert.t(fconvert.s(fconvert.t(*(esi + 0x50)) - x87_r7))
        *(esi + 0x50) = fconvert.s(x87_r6_4)
        x87_r6_4 - x87_r6_2
        eax_2.w = (x87_r6_4 < x87_r6_2 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_4, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r6_4 == x87_r6_2 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (not(p_1))
            *(esi + 0x76) = 1
    
    float* i = *(esi + 8)
    
    while (i != 0)
        void** i_1 = i
        
        if (i == 0)
            sub_4c5870("iter != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x1a1, 
                "XList<struct ParticleEmitter>::GetNextIter")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        float* i_2 = i
        i = i[0xbf]
        
        if (sub_4eecd0(i_2) == 0)
            void* esi_1 = nullptr
            
            while (true)
                if (esi_1 != 0)
                    esi_1 = *(esi_1 + 0x2fc)
                else
                    esi_1 = i_2[0xb4]
                
                if (esi_1 == 0)
                    break
                
                sub_4eb600(esi_1)
            
            int32_t edx_1 = sub_4f3590(&i_2[0xb4])
            void* eax_5 = i_2[0xb9]
            *(eax_5 + 0x14) -= 1
            sub_4f34a0(arg1 + 8, edx_1, i_1)
            esi = arg1
    
    if (*(esi + 0x10) == 0)
        *(esi + 0x76) = 1
    
    int32_t eax_8 = *(esi + 0x48)
    *(esi + 0x68) = *(esi + 0x40)
    *(esi + 0x6c) = *(esi + 0x44)
    *(esi + 0x70) = eax_8
}
