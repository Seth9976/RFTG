// 函数名称: sub_4b7d00
// 虚拟地址: 0x4b7d00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b7d00(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* edx = data_8c8710
    void* edx = data_8c8710
    int32_t* edi = arg2
    
    if (*(edx + 0xc) == 2)
        int32_t var_24_1 = *arg1
        void* var_28_1 = &arg1[4]
        int32_t var_2c_1 = arg1[1]
        int32_t var_30_1 = edi[1]
        sub_4c57f0("sserver handle msg %d (client:%d %s %x)")
        edx = data_8c8710
    
    int32_t eax_3 = arg1[1]
    int32_t result
    
    if (eax_3 == 0)
        result = edi[1]
    
    if (eax_3 != 0 || result == 0xf4257 || result == 0xf4258)
        result = edi[1]
        int32_t ecx_2
        int32_t result_1
        
        if (result - 0xf4257 u> 0x1a)
            result_1 = result
            result = sub_4c57f0("unknown messages %d")
        else
            switch (result)
                case 0xf4257
                    result = sub_401f70(edi)
                    
                    if (result.b == 0)
                        int32_t var_24_2 = *arg1
                        void* var_28_2 = &arg1[4]
                        int32_t var_2c_2 = arg1[1]
                        int32_t var_30_2 = edi[1]
                        sub_4c57f0("failed client version (client:%d %s %x)")
                        sub_4c8d10()
                        return sub_4b8dc0(arg1)
                case 0xf4258
                    if (edi[2] != 0x158)
                        sub_4c5870("message.dataLen == sizeof(PlayerLoginData)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x53b, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t ecx_5 = edi[0xe]
                    
                    if (ecx_5 s< 4 || ecx_5 s>= 0xf)
                        sub_4c5870("ValidateSettings(settings)", &data_83f3d3, "..\code\SServer.cpp", 
                            0x53d, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    *(edi + 0x37) = 0
                    *(edi + 0x5f) = 0
                    *(edi + 0x15e) = 0
                    __builtin_memcpy(&arg1[1], &edi[3], 0x158)
                    int32_t eax_8
                    
                    if (*(data_27e7a60 + 0xc) != 1)
                        eax_8 = edi[4]
                    else
                        eax_8 = edi[5]
                    
                    arg1[1] = eax_8
                    
                    if (*(data_8c8710 + 0xc) == 2)
                        void* var_24_4 = &arg1[4]
                        int32_t var_28_3 = eax_8
                        sub_4c57f0("validated login player:%d %s")
                    
                    result = sub_469040(arg1)
                    edi = arg2
                case 0xf4259
                    result = sub_401ed0(arg2, arg1)
                    edi = arg2
                case 0xf425a, 0xf425b
                    result = sub_468ef0(arg1, edi)
                case 0xf425c
                    if (edi[2] != 0x90)
                        sub_4c5870("message.dataLen == sizeof(GameStartParams)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5c1, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    edi[0x15] = 0
                    char eax_70
                    void* edx_18
                    eax_70, edx_18 = sub_4b76b0(&edi[3])
                    
                    if (eax_70 == 0)
                        sub_4c5870("ValidateGameStartParams(startParams)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5c4, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t eax_72 = data_8c8710
                    
                    if (*(eax_72 + 0xc) == 2)
                        void* var_24_21 = &arg1[4]
                        int32_t var_28_12 = arg1[1]
                        eax_72, edx_18 = sub_4c57f0("validated create quickplay player:%d %s")
                    
                    result = sub_469540(eax_72, edx_18, &edi[3], arg1)
                case 0xf425d
                    if (edi[2] != 0x90)
                        sub_4c5870("message.dataLen == sizeof(GameStartParams)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5cf, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    edi[0x15] = 1
                    int32_t eax_76 = sub_4b76b0(&edi[3])
                    
                    if (eax_76.b == 0)
                        sub_4c5870("ValidateGameStartParams(startParams)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5d2, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* ecx_25 = data_8c8710
                    
                    if (*(ecx_25 + 0xc) == 2)
                        void* var_24_23 = &arg1[4]
                        int32_t var_28_13 = arg1[1]
                        eax_76, ecx_25 = sub_4c57f0("validated create custom player:%d %s")
                    
                    int32_t* var_24_24 = arg1
                    result = sub_469830(eax_76, &edi[3], ecx_25)
                case 0xf425e
                    if (edi[2] != 4)
                        sub_4c5870("message.dataLen == sizeof(int)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x54a, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_4 = edi[3]
                    int32_t* var_24_5 = arg1
                    
                    if (sub_4b7360(esi_4, edx) == 0)
                        sub_4c5870("ValidateGamePlayer(player, gameDBID)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x54c, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_14 = sub_468810(esi_4)
                    
                    if (eax_14 == 0)
                        sub_4c5870("pGame != 0", &data_83f3d3, "..\code\SServer.cpp", 0x54e, 
                            "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(data_8c8710 + 0xc) == 2)
                        void* var_24_6 = &arg1[4]
                        int32_t var_28_4 = eax_3
                        int32_t var_2c_3 = esi_4
                        sub_4c57f0("validated resume game:%d, player:%d %s")
                    
                    result = sub_4b72b0(arg1, eax_14)
                case 0xf425f
                    if (edi[2] != 4)
                        sub_4c5870("message.dataLen == sizeof(int)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5df, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_13 = edi[3]
                    int32_t* var_24_25 = arg1
                    
                    if (sub_4b7360(esi_13, edx) == 0)
                        sub_4c5870("ValidateGamePlayer(player, gameDBID)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5e1, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_83 = sub_468810(esi_13)
                    
                    if (eax_83 == 0)
                        sub_4c5870("pGame != 0", &data_83f3d3, "..\code\SServer.cpp", 0x5e3, 
                            "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* edx_22 = data_8c8710
                    
                    if (*(edx_22 + 0xc) == 2)
                        void* var_24_26 = &arg1[4]
                        int32_t var_28_14 = eax_3
                        int32_t var_2c_11 = esi_13
                        edx_22 = sub_4c57f0("validated accept invite game:%d, player:%d %s")
                    
                    int32_t* var_24_27 = arg1
                    result = sub_4b6a90(eax_83, edx_22)
                case 0xf4260
                    if (edi[2] != 4)
                        sub_4c5870("message.dataLen == sizeof(int)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x594, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_10 = edi[3]
                    int32_t* var_24_15 = arg1
                    
                    if (sub_4b7360(esi_10, edx) == 0)
                        sub_4c5870("ValidateGamePlayer(player, gameDBID)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x596, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_51 = sub_468810(esi_10)
                    
                    if (eax_51 == 0)
                        sub_4c5870("pGame != 0", &data_83f3d3, "..\code\SServer.cpp", 0x598, 
                            "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(data_8c8710 + 0xc) == 2)
                        void* var_24_16 = &arg1[4]
                        int32_t var_28_9 = eax_3
                        int32_t var_2c_8 = esi_10
                        sub_4c57f0("validated decline game:%d, player:%d %s")
                    
                    result = sub_4b6b20(eax_51, arg1)
                case 0xf4261
                    if (edi[2] != 4)
                        sub_4c5870("message.dataLen == sizeof(int)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x577, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_8 = arg2[3]
                    void* eax_35
                    int32_t edx_10
                    eax_35, edx_10 = sub_468810(esi_8)
                    
                    if (eax_35 == 0)
                        sub_4c5870("pGame != 0", &data_83f3d3, "..\code\SServer.cpp", 0x57a, 
                            "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(data_8c8710 + 0xc) == 2)
                        void* var_24_12 = &arg1[4]
                        int32_t var_28_7 = arg1[1]
                        int32_t var_2c_6 = esi_8
                        edx_10 = sub_4c57f0("validated join game:%d, player:%d %s")
                    
                    result = sub_4b6950(eax_35, edx_10, arg1)
                    edi = arg2
                case 0xf4262
                    if (edi[2] != 4)
                        sub_4c5870("message.dataLen == sizeof(int)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5a3, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_11 = edi[3]
                    int32_t* var_24_17 = arg1
                    
                    if (sub_4b7360(esi_11, edx) == 0)
                        sub_4c5870("ValidateGamePlayer(player, gameDBID)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5a5, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_58 = sub_468810(esi_11)
                    
                    if (eax_58 == 0)
                        sub_4c5870("pGame != 0", &data_83f3d3, "..\code\SServer.cpp", 0x5a7, 
                            "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(data_8c8710 + 0xc) == 2)
                        void* var_24_18 = &arg1[4]
                        int32_t var_28_10 = eax_3
                        int32_t var_2c_9 = esi_11
                        sub_4c57f0("validated abandon game:%d, player:%d %s")
                    
                    result = sub_4b6a00(eax_58, arg1)
                case 0xf4263
                    if (edi[2] != 4)
                        sub_4c5870("message.dataLen == sizeof(int)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x585, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_9 = edi[3]
                    int32_t* var_24_13 = arg1
                    
                    if (sub_4b7360(esi_9, edx) == 0)
                        sub_4c5870("ValidateGamePlayer(player, gameDBID)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x587, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_44 = sub_468810(esi_9)
                    
                    if (eax_44 == 0)
                        sub_4c5870("pGame != 0", &data_83f3d3, "..\code\SServer.cpp", 0x589, 
                            "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(data_8c8710 + 0xc) == 2)
                        void* var_24_14 = &arg1[4]
                        int32_t var_28_8 = eax_3
                        int32_t var_2c_7 = esi_9
                        sub_4c57f0("validated forfeit game:%d, player:%d %s")
                    
                    result = sub_4b6ba0(eax_44)
                    edi = arg2
                case 0xf4264
                    if (edi[2] != 4)
                        sub_4c5870("message.dataLen == sizeof(int)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5b2, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_12 = edi[3]
                    int32_t* var_24_19 = arg1
                    
                    if (sub_4b7360(esi_12, edx) == 0)
                        sub_4c5870("ValidateGamePlayer(player, gameDBID)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5b4, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_65 = sub_468810(esi_12)
                    
                    if (eax_65 == 0)
                        sub_4c5870("pGame != 0", &data_83f3d3, "..\code\SServer.cpp", 0x5b6, 
                            "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(data_8c8710 + 0xc) == 2)
                        void* var_24_20 = &arg1[4]
                        int32_t var_28_11 = eax_3
                        int32_t var_2c_10 = esi_12
                        sub_4c57f0("validated ack forfeit game:%d, player:%d %s")
                    
                    result = sub_4b6880(eax_65)
                    edi = arg2
                case 0xf4265
                    if (edi[2] != 4)
                        sub_4c5870("message.dataLen == sizeof(int)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x559, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_6 = edi[3]
                    int32_t* var_24_7 = arg1
                    
                    if (sub_4b7360(esi_6, edx) == 0)
                        sub_4c5870("ValidateGamePlayer(player, gameDBID)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x55b, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_22 = sub_468810(esi_6)
                    
                    if (eax_22 == 0)
                        sub_4c5870("pGame != 0", &data_83f3d3, "..\code\SServer.cpp", 0x55d, 
                            "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* edx_7 = data_8c8710
                    
                    if (*(edx_7 + 0xc) == 2)
                        void* var_24_8 = &arg1[4]
                        int32_t var_28_5 = eax_3
                        int32_t var_2c_4 = esi_6
                        edx_7 = sub_4c57f0("validated complete game:%d, player:%d %s")
                    
                    result = sub_4b7250(eax_22, edx_7, arg1)
                case 0xf4266
                    if (edi[2] != 4)
                        sub_4c5870("message.dataLen == sizeof(int)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x568, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_7 = edi[3]
                    int32_t* var_24_9 = arg1
                    
                    if (sub_4b7360(esi_7, edx) == 0)
                        sub_4c5870("ValidateGamePlayer(player, gameDBID)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x56a, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_30 = sub_468810(esi_7)
                    
                    if (eax_30 == 0)
                        sub_4c5870("pGame != 0", &data_83f3d3, "..\code\SServer.cpp", 0x56c, 
                            "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* edx_8 = data_8c8710
                    
                    if (*(edx_8 + 0xc) == 2)
                        void* var_24_10 = &arg1[4]
                        int32_t var_28_6 = eax_3
                        int32_t var_2c_5 = esi_7
                        edx_8 = sub_4c57f0("validated rematch game:%d, player:%d %s")
                    
                    int32_t* var_24_11 = arg1
                    result = sub_4b71c0(eax_30, edx_8)
                case 0xf4267
                    if (edi[2] != 9)
                        sub_4c5870("message.dataLen == FRIEND_CODE_LENGTH_NULL", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x609, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (edi[5].b != 0)
                        sub_4c5870("code[8] == 0", &data_83f3d3, "..\code\SServer.cpp", 0x60b, 
                            "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_92 = &edi[3]
                    void* edx_26 = eax_92 + 1
                    
                    do
                        ecx_2.b = *eax_92
                        eax_92 += 1
                    while (ecx_2.b != 0)
                    
                    if (eax_92 - edx_26 != 8)
                        sub_4c5870("strlen(code) == FRIEND_CODE_LENGTH", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x60c, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (sub_4b7670(&edi[3]) == 0)
                        sub_4c5870("ValidFriendCodeChars(code)", &data_83f3d3, "..\code\SServer.cpp", 
                            0x60d, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(data_8c8710 + 0xc) == 2)
                        void* var_24_30 = &arg1[4]
                        int32_t var_28_17 = arg1[1]
                        sub_4c57f0("validated friend add code, player:%d %s")
                    
                    result = sub_4b7600(arg1)
                case 0xf4268
                    if (edi[2] != 4)
                        sub_4c5870("message.dataLen == sizeof(int)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5fd, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(edx + 0xc) == 2)
                        void* var_24_29 = &arg1[4]
                        int32_t var_28_16 = eax_3
                        result = sub_4c57f0("validated friend add, player:%d %s")
                case 0xf4269
                    if (edi[2] != 8)
                        sub_4c5870("message.dataLen == sizeof(FriendConfirmDesc)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x5f3, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(edx + 0xc) == 2)
                        void* var_24_28 = &arg1[4]
                        int32_t var_28_15 = eax_3
                        result = sub_4c57f0("validated friend delete, player:%d %s")
                case 0xf426a
                    if (edi[2] != 9)
                        sub_4c5870("message.dataLen == LINK_CODE_LENGTH_NULL", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x61a, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (edi[5].b != 0)
                        sub_4c5870("code[LINK_CODE_LENGTH] == 0", &data_83f3d3, "..\code\SServer.cpp", 
                            0x61c, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_101 = &edi[3]
                    void* edx_28 = eax_101 + 1
                    
                    do
                        ecx_2.b = *eax_101
                        eax_101 += 1
                    while (ecx_2.b != 0)
                    
                    if (eax_101 - edx_28 != 8)
                        sub_4c5870("strlen(code) == LINK_CODE_LENGTH", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x61d, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (sub_4b7670(&edi[3]) == 0)
                        sub_4c5870("ValidFriendCodeChars(code)", &data_83f3d3, "..\code\SServer.cpp", 
                            0x61e, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(data_8c8710 + 0xc) == 2)
                        void* var_24_31 = &arg1[4]
                        int32_t var_28_18 = arg1[1]
                        sub_4c57f0("validated add link, player:%d %s")
                    
                    result = sub_4b73a0(arg1)
                case 0xf426b
                    result = sub_4b74b0(arg1)
                case 0xf426c
                    result = sub_4b7c00(arg1)
                case 0xf426d, 0xf426f
                    result_1 = result
                    result = sub_4c57f0("unknown messages %d")
                case 0xf426e
                    if (edi[2] != 4)
                        sub_4c5870("message.dataLen == sizeof(int)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x62e, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t esi_16 = edi[3]
                    int32_t* var_24_32 = arg1
                    
                    if (sub_4b7360(esi_16, edx) == 0)
                        sub_4c5870("ValidateGamePlayer(player, gameDBID)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x630, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* eax_114 = sub_468810(esi_16)
                    
                    if (eax_114 == 0)
                        sub_4c5870("pGame != 0", &data_83f3d3, "..\code\SServer.cpp", 0x632, 
                            "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    if (*(data_8c8710 + 0xc) == 2)
                        void* var_24_33 = &arg1[4]
                        int32_t var_28_19 = arg1[1]
                        int32_t var_2c_12 = esi_16
                        sub_4c57f0("validated resume game:%d, player:%d %s")
                    
                    int32_t* var_24_34 = arg1
                    result = sub_4b7b40(eax_114, sub_4b72b0(arg1, eax_114))
                    edi = arg2
                case 0xf4270
                    result = sub_4b7a70(arg1)
                case 0xf4271
                    if (edi[2] != 0x70)
                        sub_4c5870("message.dataLen == sizeof(SyncedPlayerState)", &data_83f3d3, 
                            "..\code\SServer.cpp", 0x63d, "SServerHandleMessage")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    void* var_24_35 = &edi[3]
                    result = sub_4b7c80(arg1, edx)
        
        if (*(data_8c8710 + 0xc) == 2)
            int32_t var_24_36 = *arg1
            void* var_28_20 = &arg1[4]
            int32_t var_2c_13 = arg1[1]
            int32_t var_30_3 = edi[1]
            return sub_4c57f0("handle msg complete %d (client:%d %s %x)")
    
    return result
}
