// 函数名称: sub_4249d0
// 虚拟地址: 0x4249d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4249d0(void* arg1)
{
    // 第一条实际指令: int32_t edi = *(arg1 + 4)
    int32_t edi = *(arg1 + 4)
    
    if (edi != 0xffffffff)
        int32_t eax = sub_46b360(edi)
        
        if (eax != 0xffffffff)
            int32_t result = *sub_46b2b0(eax)
            *((result << 2) + &data_c020d8) -= 1
            return result
    
    data_c020d4 -= 1
    return 0xffffffff
}
