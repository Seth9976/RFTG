// 函数名称: sub_54c5f0
// 虚拟地址: 0x54c5f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_54c5f0(int32_t arg1)
{
    // 第一条实际指令: int32_t edx = data_be1f14
    int32_t edx = data_be1f14
    int32_t eax = arg1
    
    if (arg1 u< edx)
        void* ecx_1 = arg1 * 0xf88 + data_be1f10
        
        do
            if ((*(ecx_1 + 0xf84) & 0xffff0000) != 0)
                return *(ecx_1 + 0xf84)
            
            eax += 1
            ecx_1 += 0xf88
        while (eax u< edx)
    
    return 0
}
