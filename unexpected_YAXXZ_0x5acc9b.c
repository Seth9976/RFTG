// 函数名称: ?unexpected@@YAXXZ
// 虚拟地址: 0x5acc9b
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void?unexpected@@YAXXZ() __noreturn
{
    // 第一条实际指令: int32_t eax = __getptd()[0x1f]
    int32_t eax = __getptd()[0x1f]
    
    if (eax != 0)
        eax()
    
    noreturn terminate() __tailcall
}
