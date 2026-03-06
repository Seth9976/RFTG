// 函数名称: sub_4c9100
// 虚拟地址: 0x4c9100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_4c9100(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    
    if (*edi == 0)
        return 
    
    sub_4c9480(edi)
    arg1 = *edi
    
    if (arg1 != 0)
        _aligned_free_base(arg1)
    
    __builtin_memset(edi, 0, 0x14)
    edi[6] = 0
}
