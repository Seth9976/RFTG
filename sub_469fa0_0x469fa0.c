// 函数名称: sub_469fa0
// 虚拟地址: 0x469fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_469fa0(void* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t* var_8 = arg3
    int32_t* var_8 = arg3
    int32_t* edi = arg3
    
    if (arg1 s<= 0)
        return 
    
    int32_t* ebx_2 = arg2 - edi
    void* i_1 = arg1
    void* i
    
    do
        *edi = *(sub_463f60(*(data_27e7a40 + 0x548) + 0x43960, *(ebx_2 + edi)) + 0x7c)
        edi = &edi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
}
