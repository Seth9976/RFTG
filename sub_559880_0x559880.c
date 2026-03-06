// 函数名称: sub_559880
// 虚拟地址: 0x559880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_559880(void* arg1)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    
    if (*(esi + 0x84) == 0)
        return 
    
    sub_55d490(esi + 0x84)
    arg1 = *(esi + 0x84)
    
    if (arg1 != 0)
        _aligned_free_base(arg1)
    
    __builtin_memset(esi + 0x84, 0, 0x14)
    *(esi + 0x9c) = 0
}
