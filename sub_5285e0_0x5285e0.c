// 函数名称: sub_5285e0
// 虚拟地址: 0x5285e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5285e0(void* arg1, int32_t arg2, int32_t* arg3, void* arg4)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    
    if (*(edi + 0x1458) != 0)
        return 
    
    int32_t eax = *arg3
    *arg3 = eax + 1
    int32_t i = 0
    *(arg2 + (eax << 3)) = edi
    *(arg2 + (eax << 3) + 4) = arg4
    
    if (*(edi + 0x19d0) s<= 0)
        return 
    
    void* edx_2 = arg4 + 1
    arg1 = edx_2
    
    do
        eax, edx_2 = sub_5285e0(sub_525980(i, edx_2, edi), arg2, arg3, arg1)
        i += 1
    while (i s< *(edi + 0x19d0))
}
