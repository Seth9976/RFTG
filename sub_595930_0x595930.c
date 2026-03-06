// 函数名称: sub_595930
// 虚拟地址: 0x595930
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_595930(void* arg1, void* arg2 @ esi, int128_t* arg3)
{
    // 第一条实际指令: if (*(arg2 + 0x10) != 0)
    if (*(arg2 + 0x10) != 0)
        int128_t* eax = *(arg2 + 0xa8)
        void* edi_2 = *(arg2 + 0xac) - eax
        
        if (edi_2 s< arg1)
            sub_5ab990(arg3, eax, edi_2)
            void* ebx_1 = arg1 - edi_2
            int32_t result
            result.b = (*(arg2 + 0x10))(*(arg2 + 0x1c), edi_2 + arg3, ebx_1) == ebx_1
            *(arg2 + 0xa8) = *(arg2 + 0xac)
            return result
    
    int128_t* eax_5 = *(arg2 + 0xa8)
    
    if (eax_5 + arg1 u> *(arg2 + 0xac))
        return 0
    
    sub_5ab990(arg3, eax_5, arg1)
    *(arg2 + 0xa8) += arg1
    return 1
}
