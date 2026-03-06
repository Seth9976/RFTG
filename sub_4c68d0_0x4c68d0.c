// 函数名称: sub_4c68d0
// 虚拟地址: 0x4c68d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_4c68d0(int32_t* arg1 @ esi, int32_t arg2)
{
    // 第一条实际指令: int128_t* eax = sub_4c6810()
    int128_t* eax = sub_4c6810()
    *(eax + 4) = arg2
    *eax = arg1[0x12]
    *(eax + 8) = 0
    *(eax + 0xfe4) = *arg1
    *(eax + 0xfe8) = arg1[1]
    *(eax + 0xfec) = arg1[2]
    eax[0xff].d = arg1[3]
    bool cond:0 = *(eax + 4) s> 0x3e8
    int128_t* var_8 = eax
    
    if (cond:0)
        return sub_518190(data_27e7bb8 + 0x38, &var_8)
    
    sub_4c5870("netMessage->messageType > NETMSG_MIN_VALUE", &data_83f3d3, "Network.cpp", 0x148, 
        "MessageQueueAppendSimpleMessage")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
