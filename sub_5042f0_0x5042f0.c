// 函数名称: sub_5042f0
// 虚拟地址: 0x5042f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5042f0(int32_t* arg1, int32_t* arg2 @ edi)
{
    // 第一条实际指令: if (sub_5044e0(arg2, arg1) != 0)
    if (sub_5044e0(arg2, arg1) != 0)
        arg2[3] -= 1
        sub_504350(arg1)
        int32_t result = *arg2
        *arg1 = result
        *arg2 = arg1
        return result
    
    sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, "c:\ax2010\engine\xAlloc.h", 0x10c, 
        "XTypedAllocator<struct DefParseTree>::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
