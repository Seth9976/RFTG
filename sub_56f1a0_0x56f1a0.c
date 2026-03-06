// 函数名称: sub_56f1a0
// 虚拟地址: 0x56f1a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_56f1a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = *arg1
    int32_t result = *arg1
    
    if (result != 0)
        return result
    
    sub_4c5870("mpHead != NULL", &data_83f3d3, "c:\ax2010\engine\xList.h", 0x53, 
        "XList<struct AnimSet *>::GetHead")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
