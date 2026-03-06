// 函数名称: sub_553680
// 虚拟地址: 0x553680
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t***sub_553680(int32_t*** arg1)
{
    // 第一条实际指令: int32_t* eax = __execvp(0x40, 0x10)
    int32_t* eax = __execvp(0x40, 0x10)
    
    if (eax == 0)
        sub_4c5870("pBuffer", &data_83f3d3, "xMemory.cpp", 0x4f, "XMalloc")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = sub_4fe7d0(eax, data_30d746c)
    *eax = 0x20
    eax[1] = 0x20
    eax[3] = 1
    eax[4] = 8
    eax[5] = 1
    eax[6] = 0
    eax[0xd] = 1
    int32_t eax_3 = sub_554170(1, edx, 0x20)
    int32_t* eax_4 = sub_4cce80(8)
    eax_4[1] = 0
    eax[0xf] = eax_4
    *eax_4 = eax_3
    *(eax[0xf] + 4) = sub_4cce80(eax_3)
    int32_t* ebx = *(eax[0xf] + 4)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (eax[1] s> 0)
        do
            int32_t j = 0
            
            if (*eax s> 0)
                int32_t eax_7
                int32_t edx_2
                edx_2:eax_7 = sx.q(i)
                
                do
                    int32_t eax_9
                    int32_t edx_4
                    edx_4:eax_9 = sx.q(j)
                    int32_t eax_13 =
                        (((eax_9 + (edx_4 & 3)) s>> 2) + (((edx_2 & 3) + eax_7) s>> 2)) & 0x80000001
                    
                    if (eax_13 s< 0)
                        eax_13 = ((eax_13 - 1) | 0xfffffffe) + 1
                    
                    int32_t eax_16 = neg.d(eax_13)
                    *ebx = (sbb.d(eax_16, eax_16, eax_13 != 0) & 0xff01fe01) - 0xff01
                    j += 1
                    ebx = &ebx[1]
                while (j s< *eax)
                
                i = i_1
            
            i += 1
            i_1 = i
        while (i s< eax[1])
    
    **arg1 = eax
    return arg1
}
