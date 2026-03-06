// 函数名称: __unwindfunclet$?_CopyException@__ExceptionPtr@@SA?AV?$shared_ptr@V__ExceptionPtr@@@std@@PBXPBU_s_ThrowInfo@@_N@Z$7
// 虚拟地址: 0x68cf80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__unwindfunclet$?_CopyException@__ExceptionPtr@@SA?AV?$shared_ptr@V__ExceptionPtr@@@std@@PBXPBU_s_ThrowInfo@@_N@Z$7(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x14) & 1
    int32_t result = *(arg1 - 0x14) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x14) &= 0xfffffffe
    return sub_4c43d0(*(arg1 + 8)) __tailcall
}
