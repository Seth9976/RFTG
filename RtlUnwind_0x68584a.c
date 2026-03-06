// 函数名称: RtlUnwind
// 虚拟地址: 0x68584a
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __stdcallRtlUnwind(void* TargetFrame, void* TargetIp, EXCEPTION_RECORD* ExceptionRecord, void* ReturnValue)
{
    // 第一条实际指令: return RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue) __tailcall
    return RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue) __tailcall
}
