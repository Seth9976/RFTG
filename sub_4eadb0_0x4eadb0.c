// 函数名称: sub_4eadb0
// 虚拟地址: 0x4eadb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4eadb0(int32_t arg1, int32_t arg2, void* arg3)
{
    // 第一条实际指令: int32_t edx = *(arg3 + 4)
    int32_t edx = *(arg3 + 4)
    int32_t ecx = arg1
    
    if (arg1 u< edx)
        void* eax_1 = arg1 * 0x94 + *arg3
        
        do
            if ((*(eax_1 + 0x90) & 0xffff0000) != 0)
                return *(eax_1 + 0x90)
            
            ecx += 1
            eax_1 += 0x94
        while (ecx u< edx)
    
    return 0
}
