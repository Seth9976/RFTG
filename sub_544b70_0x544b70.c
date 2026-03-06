// 函数名称: sub_544b70
// 虚拟地址: 0x544b70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_544b70(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    
    if (*(esi + 0x4240) == 0)
        return 
    
    sub_54b6c0(esi + 0x4240)
    arg1 = *(esi + 0x4240)
    
    if (arg1 != 0)
        _aligned_free_base(arg1)
    
    __builtin_memset(esi + 0x4240, 0, 0x14)
    *(esi + 0x4258) = 0
}
