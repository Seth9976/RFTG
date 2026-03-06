// 函数名称: __unwindfunclet$??$make_shared@U_ExceptionHolder@details@Concurrency@@ABVexception_ptr@std@@PAX@std@@YA?AV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@0@ABVexception_ptr@0@$$QAPAX@Z$1
// 虚拟地址: 0x68cca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__unwindfunclet$??$make_shared@U_ExceptionHolder@details@Concurrency@@ABVexception_ptr@std@@PAX@std@@YA?AV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@0@ABVexception_ptr@0@$$QAPAX@Z$1(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x10) & 1
    int32_t result = *(arg1 - 0x10) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x10) &= 0xfffffffe
    return sub_4c43d0(*(arg1 + 8)) __tailcall
}
