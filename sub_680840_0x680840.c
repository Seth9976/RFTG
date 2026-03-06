// 函数名称: sub_680840
// 虚拟地址: 0x680840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_680840(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = arg1
    int32_t* eax = arg1
    void* esi = eax[0x6c]
    
    if (arg2 == 0)
        if (eax[0x15] == 0)
            *(esi + 4) = *(eax[0x71] + 4)
        else
            bool cond:1_1 = *(esi + 0xc) != 0
            *(esi + 4) = sub_680670
            
            if (not(cond:1_1))
                int32_t eax_6 = (*(eax[1] + 0x1c))(eax, *(esi + 8), 0, *(esi + 0x10), 1)
                *(esi + 0xc) = eax_6
                *(esi + 0x18) = 0
                *(esi + 0x14) = 0
                return eax_6
        
        *(esi + 0x18) = 0
        *(esi + 0x14) = 0
        return eax
    
    if (arg2 == 2)
        if (*(esi + 8) == 0)
            *(*eax + 0x14) = 4
            eax = (**eax)(eax)
        
        *(esi + 4) = sub_6807a0
        *(esi + 0x18) = 0
        *(esi + 0x14) = 0
        return eax
    
    if (arg2 != 3)
        *(*eax + 0x14) = 4
        int32_t eax_2 = (**eax)(eax)
        *(esi + 0x18) = 0
        *(esi + 0x14) = 0
        return eax_2
    
    if (*(esi + 8) == 0)
        *(*eax + 0x14) = 4
        eax = (**eax)(eax)
    
    *(esi + 4) = sub_6806f0
    *(esi + 0x18) = 0
    *(esi + 0x14) = 0
    return eax
}
