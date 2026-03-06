// 函数名称: __unwindfunclet$?_Get@?$_ExceptionPtr_static@Vbad_alloc@std@@@?A0x434b916e@@SA?AV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@XZ$1
// 虚拟地址: 0x68d3f8
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__unwindfunclet$?_Get@?$_ExceptionPtr_static@Vbad_alloc@std@@@?A0x434b916e@@SA?AV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@XZ$1(void* arg1 @ ebp)
{
    // 第一条实际指令: int32_t result = *(arg1 - 0x14) & 1
    int32_t result = *(arg1 - 0x14) & 1
    
    if (result == 0)
        return result
    
    *(arg1 - 0x14) &= 0xfffffffe
    return sub_5224b0(*(arg1 + 8)) __tailcall
}
