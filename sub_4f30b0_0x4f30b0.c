// 函数名称: sub_4f30b0
// 虚拟地址: 0x4f30b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4f30b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t ebx = 0
    int32_t ebx = 0
    
    if (data_27e7fcc == 0)
        return 
    
    int32_t* eax = arg1
    int32_t i_1 = 0
    
    if (eax[1] s<= 0)
        return 
    
    int32_t i
    
    do
        int32_t* esi_2 = *eax + ebx
        int32_t j = 0
        int32_t* edx
        
        if (*esi_2 s> 0)
            int32_t* ecx_1 = esi_2[1]
            
            do
                if (*ecx_1 == 2)
                    esi_2[2] = ecx_1[1]
                    int32_t* var_2c_1 = esi_2
                    edx = sub_530d80(2, edx)
                    break
                
                j += 1
                ecx_1 = &ecx_1[2]
            while (j s< *esi_2)
        
        int32_t j_1 = 0
        
        if (*esi_2 s> 0)
            do
                int32_t* eax_2 = esi_2[1] + (j_1 << 3)
                int32_t ecx_3 = *eax_2
                
                if (ecx_3 u>= 0x71)
                    sub_4c5870("attribPair.tag >= 0 && attribPair.tag < NUM_PARTICLE_PARAM_TYPES", 
                        &data_83f3d3, "Particle.cpp", 0xba4, "ParticleLoad")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (ecx_3 == 5)
                    int32_t* eax_3 = eax_2[1]
                    
                    if (eax_3 != 0)
                        int32_t* eax_5 = *sub_466320(eax_3)
                        edx = *eax_5
                        long double x87_r7_1 = float.t(*eax_5)
                        
                        if (edx s< 0)
                            x87_r7_1 = x87_r7_1 + fconvert.t(4.2949673e+09f)
                        
                        long double x87_r7_2 = float.t(eax_5[1])
                        
                        if (eax_5[1] s< 0)
                            x87_r7_2 = x87_r7_2 + fconvert.t(4.2949673e+09f)
                        
                        long double x87_r7_4 = fconvert.t(fconvert.s(fconvert.t(eax_5[2])))
                        long double x87_r6_3 = fconvert.t(0.0099999997764825821)
                        esi_2[0x3e] = fconvert.s(
                            fconvert.t(fconvert.s(x87_r7_4 * fconvert.t(fconvert.s(x87_r7_1))))
                            * x87_r6_3 / float.t(esi_2[0x3d]))
                        esi_2[0x3f] = fconvert.s(x87_r6_3
                            * fconvert.t(fconvert.s(x87_r7_4 * fconvert.t(fconvert.s(x87_r7_2))))
                            / float.t(esi_2[0x3c]))
                
                j_1 += 1
            while (j_1 s< *esi_2)
        
        eax = arg1
        i = i_1 + 1
        ebx += 0x134
        i_1 = i
    while (i s< eax[1])
}
