// 函数名称: sub_53ad00
// 虚拟地址: 0x53ad00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_53ad00(WPARAM arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = data_3079208
    void* ecx = data_3079208
    
    if (ecx == 0)
        return 
    
    int32_t ecx_1 = *(ecx + 4)
    
    if (ecx_1 == 0x19)
        int32_t var_c = arg2
        sub_538a80(arg1)
        return 
    
    if (ecx_1 == 0x1b)
        sub_539d30(arg1)
}
