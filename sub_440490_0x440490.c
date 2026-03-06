// 函数名称: sub_440490
// 虚拟地址: 0x440490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_440490(void* arg1)
{
    // 第一条实际指令: int32_t i_1 = sx.d(*(arg1 + 0x458))
    int32_t i_1 = sx.d(*(arg1 + 0x458))
    int32_t edi = 0
    int32_t eax = 0
    
    if (i_1 s> 0)
        void* edx_1 = arg1 + 0xac
        
        do
            if (*edx_1 != 0)
                edi = sx.d(*(eax * 0xb4 + arg1 + 0xaa))
                break
            
            eax += 1
            edx_1 += 0xb4
        while (eax s< i_1)
    
    int32_t edx_2 = 0
    
    if (i_1 s> 0)
        void* eax_2 = arg1 + 0xaa
        int32_t i
        
        do
            if (sx.d(*eax_2) == edi)
                edx_2 += 1
            
            eax_2 += 0xb4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    int32_t result
    result.b = edx_2 s> 1
    return result
}
