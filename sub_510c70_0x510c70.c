// 函数名称: sub_510c70
// 虚拟地址: 0x510c70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_510c70(int32_t arg1)
{
    // 第一条实际指令: int32_t edx = data_be1e7c
    int32_t edx = data_be1e7c
    int32_t eax = arg1
    
    if (arg1 u< edx)
        void* ecx_1 = arg1 * 0x4d0 + data_be1e78
        
        do
            if ((*(ecx_1 + 0x4cc) & 0xffff0000) != 0)
                return *(ecx_1 + 0x4cc)
            
            eax += 1
            ecx_1 += 0x4d0
        while (eax u< edx)
    
    return 0
}
