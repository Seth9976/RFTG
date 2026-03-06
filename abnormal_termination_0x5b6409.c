// 函数名称: __abnormal_termination
// 虚拟地址: 0x5b6409
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t__abnormal_termination()
{
    // 第一条实际指令: TEB* fsbase
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    
    if (ExceptionList->Handler == __unwind_handler
            && ExceptionList->__offset(0x8).d == *(ExceptionList->__offset(0xc).d + 0xc))
        return 1
    
    return 0
}
