// 函数名称: sub_530870
// 虚拟地址: 0x530870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_530870(int32_t arg1)
{
    // 第一条实际指令: int32_t edx = data_be1edc
    int32_t edx = data_be1edc
    int32_t eax = arg1
    
    if (arg1 u< edx)
        void* ecx_1 = arg1 * 0x19e0 + data_be1ed8
        
        do
            if ((*(ecx_1 + 0x19dc) & 0xffff0000) != 0)
                return *(ecx_1 + 0x19dc)
            
            eax += 1
            ecx_1 += 0x19e0
        while (eax u< edx)
    
    return 0
}
