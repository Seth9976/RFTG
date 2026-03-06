// 函数名称: sub_4c7de0
// 虚拟地址: 0x4c7de0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_4c7de0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi_3
    
    do
        int32_t* i = arg1[0xc]
        int32_t esi_1 = 0
        
        if (i == 0)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return i
        
        do
            esi_1 += *(*i + 0xfdec)
            i = i[1]
        while (i != 0)
        
        if (esi_1 u< 0xc)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return i
        
        int32_t var_14
        sub_4c7a00(arg1, &i[3], &var_14, i.b)
        char const* const var_30_3
        void** var_10
        
        if (var_10 s< 0 || var_10 s> 0xfd0)
            var_30_3 =
                "net error: header.messageLength >= 0 && header.messageLength <= MAX_NET_MESSAGE_SIZE"
        label_4c80a1:
            sub_4c57f0(var_30_3)
            i = sub_4c6a10(arg1)
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return i
        
        int32_t var_c
        
        if (var_c s<= 0x3e8)
            var_30_3 = "net error: header.messageType > NETMSG_MIN_VALUE"
            goto label_4c80a1
        
        if (var_14 != 0xfeedface)
            var_30_3 = "net error: header.magicNumber == header.magicNumber == NETWORK_MAGIC_NUMBER"
            goto label_4c80a1
        
        if (esi_1 s< &var_10[3])
            int32_t* i_1 = arg1[0xc]
            i = nullptr
            
            while (i_1 != 0)
                int32_t ecx_8 = *i_1
                i_1 = i_1[1]
                i += *(ecx_8 + 0xfdec)
            
            if (esi_1 == i)
                sub_5a6aba(eax_1 ^ &__saved_ebp)
                return i
            
            sub_4c5870("receiveSize == NetBufferTotalReceivedSize(loc)", &data_83f3d3, "Network.cpp", 
                0x420, "EnqueueWholeReceivedNetworkMessages")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        sub_4c7a00(arg1, 0xc, &var_14, 1)
        int32_t* i_2 = arg1[0xc]
        int32_t ecx_3 = 0
        
        while (i_2 != 0)
            int32_t edx_2 = *i_2
            i_2 = i_2[1]
            ecx_3 += *(edx_2 + 0xfdec)
        
        if (esi_1 - 0xc != ecx_3)
            sub_4c5870("receiveSize - (int)sizeof(NetPacketHeader) == NetBufferTotalReceivedSize(loc)", 
                &data_83f3d3, "Network.cpp", 0x426, "EnqueueWholeReceivedNetworkMessages")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* eax_6 = data_27e7bb8
        
        if (eax_6 == 0)
            sub_4c5870("gNetwork", &data_83f3d3, "Network.cpp", 0x11f, "NetMessageAlloc")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (*(eax_6 + 0x58) == 0)
            esi_3 = sub_4cce80(0xff8)
            sub_5abfc0(esi_3, 0, 0xff8)
        else
            esi_3 = sub_4c9050(eax_6 + 0x50)
        
        *esi_3 = arg1[0x12]
        esi_3[2] = var_10
        esi_3[1] = var_c
        esi_3[0x3f9] = *arg1
        esi_3[0x3fa] = arg1[1]
        esi_3[0x3fb] = arg1[2]
        int32_t edx_4 = arg1[3]
        int32_t* var_18 = esi_3
        esi_3[0x3fc] = edx_4
        
        if (var_10 s> 0)
            sub_4c7a00(arg1, var_10, &esi_3[3], 1)
            int32_t* i_3 = arg1[0xc]
            int32_t ecx_7 = 0
            
            while (i_3 != 0)
                int32_t edx_6 = *i_3
                i_3 = i_3[1]
                ecx_7 += *(edx_6 + 0xfdec)
            
            if (esi_1 - var_10 - 0xc != ecx_7)
                sub_4c5870(
                    "receiveSize - (int)sizeof(NetPacketHeader) - header.messageLength == "
                "NetBufferTotalReceivedSize(loc)", 
                    &data_83f3d3, "Network.cpp", 0x431, "EnqueueWholeReceivedNetworkMessages")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
        
        sub_518190(data_27e7bb8 + 0x38, &var_18)
    while (esi_3[1] s> 0x3e8)
    sub_4c5870("netMessage->messageType > NETMSG_MIN_VALUE", &data_83f3d3, "Network.cpp", 0x437, 
        "EnqueueWholeReceivedNetworkMessages")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
