// 函数名称: sub_663310
// 虚拟地址: 0x663310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_663310(void* arg1)
{
    // 第一条实际指令: sub_666530(arg1, *(arg1 + 0x180))
    sub_666530(arg1, *(arg1 + 0x180))
    int32_t ebx = 0
    *(arg1 + 0x180) = 0
    
    if (*(arg1 + 0x184) != 0)
        int32_t edi_1 = 1 << (8 - (*(arg1 + 0x174)).b)
        
        if (edi_1 s> 0)
            do
                sub_666530(arg1, *(*(arg1 + 0x184) + (ebx << 2)))
                ebx += 1
            while (ebx s< edi_1)
        
        sub_666530(arg1, *(arg1 + 0x184))
        *(arg1 + 0x184) = 0
    
    sub_666530(arg1, *(arg1 + 0x188))
    int32_t edx_2 = *(arg1 + 0x18c)
    int32_t ebx_1 = 0
    *(arg1 + 0x188) = 0
    int32_t result = sub_666530(arg1, edx_2)
    *(arg1 + 0x18c) = 0
    
    if (*(arg1 + 0x190) != 0)
        int32_t edi_2 = 1 << (8 - (*(arg1 + 0x174)).b)
        
        if (edi_2 s> 0)
            do
                sub_666530(arg1, *(*(arg1 + 0x190) + (ebx_1 << 2)))
                ebx_1 += 1
            while (ebx_1 s< edi_2)
        
        result = sub_666530(arg1, *(arg1 + 0x190))
        *(arg1 + 0x190) = 0
    
    if (*(arg1 + 0x194) != 0)
        int32_t edi_3 = 1 << (8 - (*(arg1 + 0x174)).b)
        int32_t ebx_2 = 0
        
        if (edi_3 s> 0)
            do
                sub_666530(arg1, *(*(arg1 + 0x194) + (ebx_2 << 2)))
                ebx_2 += 1
            while (ebx_2 s< edi_3)
        
        result = sub_666530(arg1, *(arg1 + 0x194))
        *(arg1 + 0x194) = 0
    
    return result
}
